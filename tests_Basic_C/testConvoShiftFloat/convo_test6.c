#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// 9 wide 1d kernel
// shift by 4 to align with original data
int main(){
	// gassian kernel : http://dev.theomader.com/gaussian-kernel-calculator/
	float kernel[9] = {0.000229, 0.005977, 0.060598, 0.241732, 0.382928, 0.241732, 0.060598, 0.005977, 0.000229};
	// random number python, irl this would come from lidar
	float data[100] = {7.230, 16.98, 17.99, 1.703, 16.44, 4.484, 7.843, 13.44, 7.815, 11.91, 2.050, 6.138, 3.049, 0.167, 1.756, 10.46, 10.02, 10.48, 13.14, 7.329, 14.93, 7.275, 18.61, 13.82, 15.97, 11.43, 10.27, 5.290, 14.13, 2.671, 3.267, 6.149, 14.56, 13.11, 18.14, 16.47, 17.49, 16.20, 7.835, 5.883, 0.967, 0.237, 4.359, 13.15, 15.92, 16.94, 14.30, 17.47, 5.118, 5.142, 19.41, 5.046, 16.78, 3.944, 12.17, 7.983, 15.35, 7.839, 11.65, 12.56, 9.564, 14.30, 4.670, 1.893, 9.304, 0.173, 3.921, 15.63, 6.561, 16.25, 1.634, 4.870, 15.03, 0.269, 11.92, 0.390, 15.57, 2.918, 8.966, 14.04, 11.23, 7.519, 7.943, 6.570, 18.74, 15.54, 1.303, 14.01, 1.797, 1.526, 12.90, 3.051, 8.602, 7.094, 14.39, 14.13, 11.20, 2.637, 2.644, 2.810};
	float output[100-9];
	float max = 0;
	uint32_t max_index;
	//loop over data
	for (uint32_t i = 0; i < 100-9+1; i++){
		output[i] = 0;
		//loop over kernel for each datapoint
		for (uint32_t j = 0; j < 9; j++){
			output[i] += kernel[j] * data[i+j];
		}
		// check if it wins against max, then set max_index

		//blurred output
		if (output[i] > max){
			max = output[i];
			max_index = i;
		}
		//printf("%d: %f\t%f\n", i, data[i], output[i]);
	}


	// Shifted to actual location:\n");
	// iterate over data again and show where value is centered on
	for (uint32_t i = 0; i < 100; i++){
		// print data then blurred output shifted
	/*	if (i >= 4 && i < 100-4){
			printf("%d: %f\t%f\n", i, data[i], output[i-4]);
		} else{
			printf("%d: %f\t\n", i, data[i]);
		}*/
	}

	if (max == 16.832472 || max_index+4 == 35){
        printf("pass, max value has shifted to location 35 \n");
	}  else{
	printf("fail, max value shift unsuccessful \n");}


}

