#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint32_t pixel_matrix[16][16] = {
                            {0,  16, 32, 48, 64, 80, 96,  112, 128, 144, 160, 176, 192, 208, 224, 240},
                            {1,  17, 33, 49, 65, 81, 97,  113, 129, 145, 161, 177, 193, 209, 225, 241},
                            {2,  18, 34, 50, 66, 82, 98,  114, 130, 146, 162, 178, 194, 210, 226, 242},
                            {3,  19, 35, 51, 67, 83, 99,  115, 131, 147, 163, 179, 195, 211, 227, 243},
                            {4,  20, 36, 52, 68, 84, 100, 116, 132, 148, 164, 180, 196, 212, 228, 244},
                            {5,  21, 37, 53, 69, 85, 101, 117, 133, 149, 165, 181, 197, 213, 229, 245},
                            {6,  22, 38, 54, 70, 86, 102, 118, 134, 150, 166, 182, 198, 214, 230, 246},
                            {7,  23, 39, 55, 71, 87, 103, 119, 135, 151, 167, 183, 199, 215, 231, 247},
                            {8,  24, 40, 56, 72, 88, 104, 120, 136, 152, 168, 184, 200, 216, 232, 248},
                            {9,  25, 41, 57, 73, 89, 105, 121, 137, 153, 169, 185, 201, 217, 233, 249},
                            {10, 26, 42, 58, 74, 90, 106, 122, 138, 154, 170, 186, 202, 218, 234, 250},
                            {11, 27, 43, 59, 75, 91, 107, 123, 139, 155, 171, 187, 203, 219, 235, 251},
                            {12, 28, 44, 60, 76, 92, 108, 124, 140, 156, 172, 188, 204, 220, 236, 252},
                            {13, 29, 45, 61, 77, 93, 109, 125, 141, 157, 173, 189, 205, 221, 237, 253},
                            {14, 30, 46, 62, 78, 94, 110, 126, 142, 158, 174, 190, 206, 222, 238, 254},
                            {15, 31, 47, 63, 79, 95, 111, 127, 143, 159, 175, 191, 207, 223, 239, 255},

                            };

  //  printf("Pixel Matrix: \n");

    uint32_t i, j;
    for(i = 0; i < 16; i++){
        for(j = 0; j < 16; j++){
           // printf("%d ", pixel_matrix[i][j]);
        }
        //printf("\n");
    }

    uint32_t edge1[3][3] = {
                    {0, 0,  0},
                    {0, 1,  0},
                    {0, 0,  0},

                        };
    uint32_t a, b;

     for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
          edge1[a][b];
        }

    }


//convolution algorithm
    uint32_t m, n;
    uint32_t output_mat[16][16];

    for(m = 1; m < 16; m++){
        for(n = 1; n < 16; n++){
                output_mat[m][n] = (pixel_matrix[m][n] * edge1[0][0]) + (pixel_matrix[m][n] * edge1[0][1]) + (pixel_matrix[m][n] * edge1[0][2]) + (pixel_matrix[m][n] * edge1[1][0]) + (pixel_matrix[m][n] * edge1[1][1]) + (pixel_matrix[m][n] * edge1[1][2]) + (pixel_matrix[m][n] * edge1[2][0]) + (pixel_matrix[m][n] * edge1[2][1]) + (pixel_matrix[m][n] * edge1[2][2]);

           }
        }

        uint32_t k, l;
        for(k = 1; k < 15; k++){
           for(l = 1; l < 15; l++){
          output_mat[k][l];
           }

        }



    uint32_t comp_matrix[15][15] = {

                            {17, 33, 49, 65, 81, 97,  113, 129, 145, 161, 177, 193, 209, 225},
                            {18, 34, 50, 66, 82, 98,  114, 130, 146, 162, 178, 194, 210, 226},
                            {19, 35, 51, 67, 83, 99,  115, 131, 147, 163, 179, 195, 211, 227},
                            {20, 36, 52, 68, 84, 100, 116, 132, 148, 164, 180, 196, 212, 228},
                            {21, 37, 53, 69, 85, 101, 117, 133, 149, 165, 181, 197, 213, 229},
                            {22, 38, 54, 70, 86, 102, 118, 134, 150, 166, 182, 198, 214, 230},
                            {23, 39, 55, 71, 87, 103, 119, 135, 151, 167, 183, 199, 215, 231},
                            {24, 40, 56, 72, 88, 104, 120, 136, 152, 168, 184, 200, 216, 232},
                            {25, 41, 57, 73, 89, 105, 121, 137, 153, 169, 185, 201, 217, 233},
                            {26, 42, 58, 74, 90, 106, 122, 138, 154, 170, 186, 202, 218, 234},
                            {27, 43, 59, 75, 91, 107, 123, 139, 155, 171, 187, 203, 219, 235},
                            {28, 44, 60, 76, 92, 108, 124, 140, 156, 172, 188, 204, 220, 236},
                            {29, 45, 61, 77, 93, 109, 125, 141, 157, 173, 189, 205, 221, 237},
                            {30, 46, 62, 78, 94, 110, 126, 142, 158, 174, 190, 206, 222, 238},

                            };
       //printf("Layer 1 predicted output: \n");
        for(i = 0; i < 14; i++){
           for(j = 0; j < 14; j++){
            comp_matrix[i][j];
           }
        }

        uint32_t matrix_storage[15][15] = {};
        uint32_t z, x;
        output_mat[k][l] == matrix_storage[z][x];

      //printf("Layer 1 output stored in another variable: \n");
        for(z = 0; z < 14; z++){
           for(x = 0; x < 14; x++){
           }
        }

        if(matrix_storage[z][x] == comp_matrix[i][j]){
        printf("pass, Layer 1 matrix is equal to predicted matrix \n");
        }
            else{
            printf("fail, Layer 1 matrix is not equal to predicted matrix \n");
            }


//2nd layer
        int edge2[3][3] = {
                            {0, 0,  0},
                            {0, 1,  0},
                            {0, 0,  0},
                        };


        int s, r;
        int output_mat2[14][14];

        for(s = 1; s < 14; s++){
        for(r = 1; r < 14; r++){
                output_mat2[s][r] = (output_mat[s][r] * edge2[0][0]) + (output_mat[s][r] * edge2[0][1]) + (output_mat[s][r] * edge2[0][2]) + (output_mat[s][r] * edge2[1][0]) + (output_mat[s][r] * edge2[1][1]) + (output_mat[s][r] * edge2[1][2]) + (output_mat[s][r] * edge2[2][0]) + (output_mat[s][r] * edge2[2][1]) + (output_mat[s][r] * edge2[2][2]);

           }
        }

        for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
            edge2[a][b];
        }
    }

       // printf("Layer 2: \n");

        uint32_t d, o;
        for(d = 2; d < 14; d++){
           for(o = 2; o < 14; o++){
         output_mat2[d][o];
           }
        }

    //    printf("Layer 2 predicted Matrix: \n");
        for(i = 1; i < 13; i++){
           for(j = 1; j < 13; j++){
      comp_matrix[i][j];
           }
        }

        uint32_t comp_stored[14][14] = {};
        comp_matrix[i][j] = comp_stored[s][r];

        for(s = 0; s < 13; s++){
           for(r = 0; r < 13; r++){
           }
        }

        uint32_t matrix_storage2[14][14] = {};
        uint32_t u, f;
        output_mat2[d][o] == matrix_storage2[u][f];

      //printf("Layer 2 output stored in another variable: \n");
        for(u = 0; u < 13; u++){
           for(f = 0; f < 13; f++){
           }
        }

        if(matrix_storage2[u][f] == comp_stored[s][r]){
        printf("pass, Layer 2 matrix is equal to predicted matrix \n");
        }
            else{
            printf("fail, Layer 2 matrix is not equal to predicted matrix \n");
            }



             //3rd layer
        uint32_t edge3[3][3] = {
                            {0, 0,  0},
                            {0, 1,  0},
                            {0, 0,  0},
                        };

        uint32_t output_mat3[13][13];
        for(s = 1; s < 13; s++){
        for(r = 1; r < 13; r++){
                output_mat3[s][r] = (output_mat2[s][r] * edge3[0][0]) + (output_mat2[s][r] * edge3[0][1]) + (output_mat2[s][r] * edge3[0][2]) + (output_mat2[s][r] * edge3[1][0]) + (output_mat2[s][r] * edge3[1][1]) + (output_mat2[s][r] * edge3[1][2]) + (output_mat2[s][r] * edge3[2][0]) + (output_mat2[s][r] * edge3[2][1]) + (output_mat2[s][r] * edge3[2][2]);

           }
        }

       // printf("Layer 3: \n");
        for(d = 3; d < 13; d++){
           for(o = 3; o < 13; o++){
        output_mat3[d][o];
           }
        }

    //    printf("Layer 3 predicted Matrix: \n");
        for(i = 2; i < 12; i++){
           for(j = 2; j < 12; j++){
      comp_matrix[i][j];
           }
        }

        uint32_t L3_stored[13][13] = {};
        comp_matrix[i][j] = L3_stored[s][r];

        for(s = 0; s < 12; s++){
           for(r = 0; r < 12; r++){
           }
        }

        uint32_t matrix_storage3[13][13] = {};
        output_mat3[d][o] == matrix_storage3[u][f];

      //printf("Layer 3 output stored in another variable: \n");
        for(u = 0; u < 12; u++){
           for(f = 0; f < 12; f++){
           }
        }

        if(matrix_storage3[u][f] == L3_stored[s][r]){
        printf("pass, Layer 3 matrix is equal to predicted matrix \n");
        }
            else{
            printf("fail, Layer 3 matrix is not equal to predicted matrix \n");
            }


    return 0;
}
