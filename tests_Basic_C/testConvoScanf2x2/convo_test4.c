#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define Rows      10
#define Cols      10

int main()
{
    uint32_t matrix_input[Rows][Cols];
    uint32_t matrix_impulse[Rows][Cols];
    uint32_t i,j,r,c,a,b,m,n;


    printf("Enter number of Rows for Input Matrix: ");
    scanf("%d",&r);
    printf("Enter number of Columns for Input Matrix: ");
    scanf("%d",&c);

    printf("\nEnter Input Matrix elements :\n");
    for(i = 0; i < r ; i++){
        for(j=0;j< c;j++)
        {
            printf("Enter Element [%d,%d] : ",i,j);
            scanf("%d",&matrix_input[i][j]);
        }
    }

    printf("\nEntered User Input Matrix is :\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++)
        {
            matrix_input[i][j];
        }
    }

// Impulse
    printf("Enter number of Rows for Impulse Matrix: ");
    scanf("%d",&a);
    printf("Enter number of Columns for Impulse Matrix: ");
    scanf("%d",&b);

    printf("\nEnter Impulse Matrix elements :\n");
    for(m = 0; m < a ; m++){
        for(n = 0; n < b; n++)
        {
            printf("Enter Element [%d,%d] : ",m,n);
            scanf("%d",&matrix_impulse[m][n]);
        }
    }

    for(m = 0; m < a; m++){
        for(n = 0; n < b; n++)
        {
            matrix_impulse[m][n];
        }

    }

    int output[i][j];
    for(i = 0; i < r-1; i++){
        for(j = 0; j < c-1; j++){
                output[0][0] = (matrix_input[0][0] * matrix_impulse[0][0]) + (matrix_input[0][1] * matrix_impulse[0][1]) + (matrix_input[1][0] * matrix_impulse[1][0]) + (matrix_input[1][1] * matrix_impulse[1][1]);
                output[0][1] = (matrix_input[0][1] * matrix_impulse[0][0]) + (matrix_input[0][2] * matrix_impulse[0][1]) + (matrix_input[1][1] * matrix_impulse[1][0]) + (matrix_input[1][2] * matrix_impulse[1][1]);
                output[0][2] = (matrix_input[0][2] * matrix_impulse[0][0]) + (matrix_input[0][3] * matrix_impulse[0][1]) + (matrix_input[1][2] * matrix_impulse[1][0]) + (matrix_input[1][3] * matrix_impulse[1][1]);

                output[1][0] = (matrix_input[1][0] * matrix_impulse[0][0]) + (matrix_input[1][1] * matrix_impulse[0][1]) + (matrix_input[2][0] * matrix_impulse[1][0]) + (matrix_input[2][1] * matrix_impulse[1][1]);
                output[1][1] = (matrix_input[1][1] * matrix_impulse[0][0]) + (matrix_input[1][2] * matrix_impulse[0][1]) + (matrix_input[2][1] * matrix_impulse[1][0]) + (matrix_input[2][2] * matrix_impulse[1][1]);
                output[1][2] = (matrix_input[1][2] * matrix_impulse[0][0]) + (matrix_input[1][3] * matrix_impulse[0][1]) + (matrix_input[2][2] * matrix_impulse[1][0]) + (matrix_input[2][3] * matrix_impulse[1][1]);

                output[2][0] = (matrix_input[3][0] * matrix_impulse[0][0]) + (matrix_input[2][1] * matrix_impulse[0][1]) + (matrix_input[3][0] * matrix_impulse[1][0]) + (matrix_input[3][1] * matrix_impulse[1][1]);
                output[2][1] = (matrix_input[2][1] * matrix_impulse[0][0]) + (matrix_input[2][2] * matrix_impulse[0][1]) + (matrix_input[3][1] * matrix_impulse[1][0]) + (matrix_input[3][2] * matrix_impulse[1][1]);
                output[2][2] = (matrix_input[2][2] * matrix_impulse[0][0]) + (matrix_input[2][3] * matrix_impulse[0][1]) + (matrix_input[3][2] * matrix_impulse[1][0]) + (matrix_input[3][3] * matrix_impulse[1][1]);


//                output[i][j] = (matrix_input[0][0] * matrix_impulse[0][0]) + (matrix_input[i-1][j-1] * matrix_impulse[a-1][b-1]);
            }
    }
    for(i = 0; i < r-1; i++){
        for(j = 0; j < c-1; j++){
            output[i][j];
           }
        }

    if( a != 2 || b != 2){
        printf("Fail, Impulse Matrix is not 2x2\n");
    } else{
        printf("Test completed\n");

    }

    return 0;
}

