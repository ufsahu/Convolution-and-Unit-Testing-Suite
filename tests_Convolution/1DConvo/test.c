#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "dataset.h"

uint32_t x[258],h[258],y[258];

main()
{   uint32_t data2[3] = {1, 1, 1};
    uint32_t i,j;
    uint32_t m = 256;
    uint32_t n = 3;


    for(i=0; i<m; i++){
            x[i] = inp_data[i]; }
        for(i=0; i<m; i++){
            x[i];
            }

    for(i=0; i<n; i++){
            h[i] = data2[i]; }
        for(i=0;i<n;i++){
            h[i];}

    for(i=0; i< m+n-1; i++){
           for(j=0; j<=i; j++){
               y[i] = y[i] + (x[j]*h[i-j]);  //main formula
        }
            }

//displaying the output
   /*     for( i=0 ; i <m+n-1; i++){
            printf("Output y[%d] = %d \n ", i, y[i]);
                }*/

 
      for(i=0;i<m+n-1;i++)
         if (y[i] == output[i]){
    //        printf("pass, x(%d) and h(%d) successfully convolved to y(%d) = %d \n",i,i,i,y[i] );
            printf("pass, x(n) and h(n) successfully convolved to y(n) \n" );
        } else{
            printf("fail, convolution output is incorrect\n");
            }



    return 0;
}
