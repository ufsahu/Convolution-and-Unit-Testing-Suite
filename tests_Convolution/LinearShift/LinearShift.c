#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//checking basic convolution linear shift algorithm
//the test convolves the two input 1D data by linear shift

uint32_t x[9],h[9],y[9];

main()
{
    uint32_t i,j;
    uint32_t m = 5;
    uint32_t n = 5;
    uint32_t a[5] = {1, 1, 1, 1, 1};
    uint32_t b[5] = {1, 1, 1, 1, 1};


    //x[5] elements i and m and a[]
    for(i=0;i<m;i++){
        x[i] = a[i]; }

    //h[5] elements i and n and b[]
    for(i=0;i<n;i++){
        h[i] = b[i]; }

    for(i=0;i<m+n-1;i++){
           for(j=0;j<=i;j++){
               y[i] = y[i]+(x[j]*h[i-j]);  //main formula for linear shift
        }
            }

//displaying the o/p
    /*   for(i=0;i<m+n-1;i++){
            printf("Output y[%d] = %d \n",i,y[i]);
                }*/

    uint32_t output[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1}; //stored output

    //verifying calculated output with stored data
    for(i=0;i<m+n-1;i++)
        if (y[i] == output[i]){
            printf("pass, x(%d) and h(%d) successfully convolved to y(%d) = %d \n",i,i,i,y[i] );
        } else{
            printf("fail, convolution output is incorrect\n");
            }
    return 0;

}
