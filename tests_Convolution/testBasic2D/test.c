#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//checking basic convolution matrix logic in algorithm
//the test convolves input matrix of [4x4] to [3x3] using a filter [2x2]

int main()
{
    uint32_t num[4][4] = {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16},
                    };
    uint32_t imp[2][2] = {
                    {0,1},
                    {1,0}
                    };
    printf("Input Matrix [4x4]: \n");
    uint32_t i, j, mat[3][3];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", num[i][j]);
        } printf("\n");
    }

    printf("Filter Matrix [2x2]: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
          printf("%d ", imp[i][j]);
        } printf("\n");
    }


    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
                mat[0][0] = (num[0][0] * imp[0][0]) + (num[0][1] * imp[0][1]) + (num[1][0] * imp[1][0]) + (num[1][1] * imp[1][1]);
                mat[0][1] = (num[0][1] * imp[0][0]) + (num[0][2] * imp[0][1]) + (num[1][1] * imp[1][0]) + (num[1][2] * imp[1][1]);
                mat[0][2] = (num[0][2] * imp[0][0]) + (num[0][3] * imp[0][1]) + (num[1][2] * imp[1][0]) + (num[1][3] * imp[1][1]);

                mat[1][0] = (num[1][0] * imp[0][0]) + (num[1][1] * imp[0][1]) + (num[2][0] * imp[1][0]) + (num[2][1] * imp[1][1]);
                mat[1][1] = (num[1][1] * imp[0][0]) + (num[1][2] * imp[0][1]) + (num[2][1] * imp[1][0]) + (num[2][2] * imp[1][1]);
                mat[1][2] = (num[1][2] * imp[0][0]) + (num[1][3] * imp[0][1]) + (num[2][2] * imp[1][0]) + (num[2][3] * imp[1][1]);

                mat[2][0] = (num[3][0] * imp[0][0]) + (num[2][1] * imp[0][1]) + (num[3][0] * imp[1][0]) + (num[3][1] * imp[1][1]);
                mat[2][1] = (num[2][1] * imp[0][0]) + (num[2][2] * imp[0][1]) + (num[3][1] * imp[1][0]) + (num[3][2] * imp[1][1]);
                mat[2][2] = (num[2][2] * imp[0][0]) + (num[2][3] * imp[0][1]) + (num[3][2] * imp[1][0]) + (num[3][3] * imp[1][1]);

           }
        }


        printf("Filter convolving by cutting the edges of the input matrix\n");
        printf("Output Matrix [3x3]: \n");
        for(i = 0; i < 3; i++){
           for(j = 0; j < 3; j++){
           printf("%d ", mat[i][j]);
           }printf("\n");
        }


        uint32_t output[3][3] = {
                    {7, 9, 11},
                    {15, 17, 19},
                    {23, 25, 27},
                        };

    printf("Verifying elements in the above Output [3x3] \n");

    for(i = 0; i < 3; i++){
           for(j = 0; j < 3; j++) {
            if (mat[i][j] == output[i][j]){
                //printf("pass \n");
		printf("pass for element [%d][%d]\n",i,j);
                    } else{
                        printf("fail for element [%d][%d]\n",i,j);
                      //  printf("fail\n");
                    }
                }
            }

    return 0;
}
