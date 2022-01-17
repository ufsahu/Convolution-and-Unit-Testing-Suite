#include "dataset.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t pixel_matrix[16][16], output_mat[14][14], output_mat2[12][12];

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


//convolution algorithm pixelmatrix[16][16] x edge1[3][3]
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
        printf("Pass 1 output_mat[%d][%d] == store_mat[%d][%d] \n",k,l,k,l);
        }
            else{
            printf("Fail 1 output_mat[%d][%d] == store_mat[%d][%d] \n",k,l,k,l);
            }


 //2nd layer


 uint32_t edge2[3][3] = {
                        {0x00000000, 0x00000000,  0x00000000},
                        {0x00000000, 0x00000001,  0x00000000},
                        {0x00000000, 0x00000000,  0x00000000},
                        };

    uint32_t s, r;
     for(s = 0; s < 12; s++){
        for(r = 0; r < 12; r++){
                output_mat2[s][r] = (output_mat[s+1][r+1] * edge2[0][0]) + (output_mat[s+1][r+1] * edge2[0][1]) + (output_mat[s+1][r+1] * edge2[0][2]) + (output_mat[s+1][r+1] * edge2[1][0]) + (output_mat[s+1][r+1] * edge2[1][1]) + (output_mat[s+1][r+1] * edge2[1][2]) + (output_mat[s+1][r+1] * edge2[2][0]) + (output_mat[s+1][r+1] * edge2[2][1]) + (output_mat[s+1][r+1] * edge2[2][2]);

           }
        }


      for(k = 0; k < 12; k++){
           for(l = 0; l < 12; l++){
          //printf("%p ",output_mat2[k][l]);
          output_mat2[k][l];
           }
           //printf("\n");
        }


 printf("Checking Matrix Output Elements layer2 : \n");
  for(k = 0; k < 12; k++)
           for(l = 0; l < 12; l++)
        if(output_mat2[k][l] == layer2_out_data[k][l]){
        printf("Pass 2 output_mat[%d][%d] == store_mat[%d][%d] \n",k,l,k,l);
        }
            else{
            printf("Fail 2 output_mat[%d][%d] == store_mat[%d][%d] \n",k,l,k,l);
            }

  return 0;
}

