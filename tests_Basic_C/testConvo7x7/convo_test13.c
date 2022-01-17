#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main()              //width and height Rows and Columns
{
    uint32_t num[7][7] = {
                    {1,2,3,4,1,1,1},
                    {5,6,7,8,1,1,1},
                    {9,10,11,12,1,1,1},
                    {13,14,15,16,1,1,1},
                    {1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1},
                    };
    uint32_t imp[2][2] = {
                    {0,1},
                    {1,0}
                    };

    uint32_t i, j, mat[6][6];
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            num[i][j];
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            imp[i][j];
        }
    }

    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
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

        for(i = 0; i < 6; i++){
           for(j = 0; j < 6; j++){
            mat[i][j];
           }
        }

        uint32_t output[6][6] =  {
                                    {7, 9, 11, 15, 17, 19},
                                    {15, 17, 19, 23, 25, 27},
                                    {23, 25, 27, 0, 1, 1},
                                    {0, 1, 1, 0, 1, 2},
                                    {0, 1, 2, 3, 4, 1},
                                    {3, 4, 1, 1, 1, 5},

                        };

        uint32_t m, n;
        for(m = 0; m < 6; m++){
           for(n = 0; n < 6; n++){
          output[m][n];
           }

        }


        uint32_t mat_stor[6][6] = {};
        uint32_t a, b;
        mat[i][j] == mat_stor[a][b];

        for(a = 0; a < 6; a++){
           for(b = 0; b < 6; b++){
           }
        }

        if (mat_stor[a][b] == output[m][n]){
            printf("pass, 7x7 and 2x2 matrices have successfully convolved to 6x6 \n");
        } else{
            printf("fail, convolution output is incorrect \n");
            }




    return 0;
}
