#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>
#include <string.h>
#include <stdint.h>


int main()
{
    printf("Input data: \n");
    uint32_t pixel_matrix[8][8] = {
                {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038},
                {0x00000001, 0x00000009, 0x00000011, 0x00000019, 0x00000021, 0x00000029, 0x00000031, 0x00000039},
                {0x00000002, 0x0000000A, 0x00000012, 0x0000001A, 0x00000022, 0x0000002A, 0x00000032, 0x0000003A},
                {0x00000003, 0x0000000B, 0x00000013, 0x0000001B, 0x00000023, 0x0000002B, 0x00000033, 0x0000003B},
                {0x00000004, 0x0000000C, 0x00000014, 0x0000001C, 0x00000024, 0x0000002C, 0x00000034, 0x0000003C},
                {0x00000005, 0x0000000D, 0x00000015, 0x0000001D, 0x00000025, 0x0000002D, 0x00000035, 0x0000003D},
                {0x00000006, 0x0000000E, 0x00000016, 0x0000001E, 0x00000026, 0x0000002E, 0x00000036, 0x0000003E},
                {0x00000007, 0x0000000F, 0x00000017, 0x0000001F, 0x00000027, 0x0000002F, 0x00000037, 0x0000003F},

                            };

    uint32_t i, j;
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
           printf("%p ", pixel_matrix[i][j]);
        }printf("\n");
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
//convolution algorithm
    uint32_t m, n;
    uint32_t output_mat[6][6];

    for(m = 0; m < 7; m++){
        for(n = 0; n < 7; n++){
                output_mat[m][n] = (pixel_matrix[m+1][n+1] * edge1[0][0]) + (pixel_matrix[m+1][n+1] * edge1[0][1]) + (pixel_matrix[m+1][n+1] * edge1[0][2]) + (pixel_matrix[m+1][n+1] * edge1[1][0]) + (pixel_matrix[m+1][n+1] * edge1[1][1]) + (pixel_matrix[m+1][n+1] * edge1[1][2]) + (pixel_matrix[m+1][n+1] * edge1[2][0]) + (pixel_matrix[m+1][n+1] * edge1[2][1]) + (pixel_matrix[m+1][n+1] * edge1[2][2]);

           }
        }
        printf("Convolved output data: \n");
        uint32_t k, l;
        for(k = 0; k < 6; k++){
           for(l = 0; l < 6; l++){
            printf("%p ",output_mat[k][l]);
           }printf("\n");
        }



    return 0;
}

