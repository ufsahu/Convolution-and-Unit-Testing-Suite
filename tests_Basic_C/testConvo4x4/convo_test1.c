#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


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
    uint32_t i, j, mat[3][3];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            num[i][j];
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           imp[i][j];
        }
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

        for(i = 0; i < 3; i++){
           for(j = 0; j < 3; j++){
           mat[i][j];
           }
        }


        uint32_t output[3][3] = {
                    {7, 9, 11},
                    {15, 17, 19},
                    {23, 25, 27},
                        };

        uint32_t m, n;
        for(m = 0; m < 3; m++){
           for(n = 0; n < 3; n++){
            output[m][n];
           }
        }

        uint32_t matstor[3][3] = {};
        uint32_t a, b;
        mat[i][j] == matstor[a][b];

                for(a = 0; a < 3; a++){
           for(b = 0; b < 3; b++){
           }
        }


        if (matstor[a][b] == output[m][n]){
            printf("pass, 5x5 and 2x2 matrices have successfully convolved to 3x3\n");
        } else{
            printf("fail, convolution output is incorrect\n");
            }

    return 0;
}

