#include "dataset.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t pixel_matrix[16][16], output_mat[14][14];

int main()
{

    uint32_t i, j;
    for(i = 0; i < 16; i++){
        for(j = 0; j < 16; j++){
           pixel_matrix[i][j] = inp_data[i][j] ;
        }
        //printf("\n");
    }

    uint32_t edge1[3][3] = {
                    {0x00000000, 0x00000000,  0x00000000},
                    {0x00000000, 0x00000001,  0x00000000},
                    {0x00000000, 0x00000000,  0x00000000},
                        };
    uint32_t a, b;

     for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
          edge1[a][b];
        }
    }


//convolution algorithm pixel matrix[16][16] x filter edge1[3][3]
// layer1
    uint32_t m, n;
    for(m = 0; m < 14; m++){
        for(n = 0; n < 14; n++){
                output_mat[m][n] = (pixel_matrix[m+1][n+1] * edge1[0][0]) + (pixel_matrix[m+1][n+1] * edge1[0][1]) + (pixel_matrix[m+1][n+1] * edge1[0][2]) + (pixel_matrix[m+1][n+1] * edge1[1][0]) + (pixel_matrix[m+1][n+1] * edge1[1][1]) + (pixel_matrix[m+1][n+1] * edge1[1][2]) + (pixel_matrix[m+1][n+1] * edge1[2][0]) + (pixel_matrix[m+1][n+1] * edge1[2][1]) + (pixel_matrix[m+1][n+1] * edge1[2][2]);
           }
        }

        uint32_t k, l;
        for(k = 0; k < 14; k++){
           for(l = 0; l < 14; l++){
          output_mat[k][l];
           }
        }

  printf("Checking Matrix Output Elements layer1 \n");
  for(k = 0; k < 14; k++)
           for(l = 0; l < 14; l++)
        if(output_mat[k][l] == out_data[k][l]){
        printf("Pass output_data[%d][%d] == stored_data[%d][%d] \n",k,l,k,l);
        }
            else{
            printf("Fail output_data[%d][%d] == stored_data[%d][%d] \n",k,l,k,l);
            }

  return 0;
}

