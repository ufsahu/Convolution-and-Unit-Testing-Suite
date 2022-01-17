#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t x[15],h[15],y[15];

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
    for(i=0;i<m;i++){
        x[i];
        }


    //h[5] elements i and n and b[]
    for(i=0;i<n;i++){
        h[i] = b[i]; }
    for(i=0;i<n;i++){
        h[i];}



        for(i=0;i<m+n-1;i++){
           for(j=0;j<=i;j++){
               y[i] = y[i]+(x[j]*h[i-j]);  //main formula
        }
            }

        for(i=0; i<9; i++){
            y[i];
        }

//displaying the o/p
        /*for(i=0;i<m+n-1;i++){
            printf("\n The Value of output y[%d] = %d",i,y[i]);
                } */

    uint32_t output[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    uint32_t z;
    for(z=0; z<9; z++){
       output[z];
        }

    uint32_t stor_output[9] = {};
    uint32_t k;
    y[i] == stor_output[k];
    for(k=0; k<9; k++){
       stor_output[k];
        }

        if (stor_output[k] == output[z]){
            printf("pass, x(n) and h(n) successfully convolved to y(n) \n");
        } else{
            printf("fail, convolution output is incorrect\n");
            }


    return 0;
}
