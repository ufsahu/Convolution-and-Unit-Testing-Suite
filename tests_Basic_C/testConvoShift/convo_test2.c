#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint32_t x[6] = {1, 1, 1, 0, 0, 0};
    float h[3] = {0.5, 0.2, 0.3};
    uint32_t i,j;
    for(i = 0; i < 6; i++){
        x[i];
    }
    for(j = 0; j < 3; j++){
        h[j];
    }

    float a[18];
    uint32_t b;
    for(b = 0; b < 18; b++){
        a[0] = x[0] * h[0];
        a[1] = x[0] * h[1];
        a[2] = x[0] * h[2];

        a[3] = x[1] * h[0];
        a[4] = x[1] * h[1];
        a[5] = x[1] * h[2];

        a[6] = x[2] * h[0];
        a[7] = x[2] * h[1];
        a[8] = x[2] * h[2];

        a[9]  = x[3] * h[0];
        a[10] = x[3] * h[1];
        a[11] = x[3] * h[2];

        a[12] = x[4] * h[0];
        a[13] = x[4] * h[1];
        a[14] = x[4] * h[2];

        a[15] = x[5] * h[0];
        a[16] = x[5] * h[1];
        a[17] = x[5] * h[2];

    }

    for(b = 0; b < 3; b++){
        a[b];
    }
    for(b = 3; b < 6; b++){
        a[b];
    }
        for(b = 6; b < 9; b++){
        a[b];
    }
        for(b = 9; b < 12; b++){
        a[b];
    }
        for(b = 12; b < 15; b++){
        a[b];
    }
        for(b = 15; b < 18; b++){
        a[b];
    }

        float output[8];
        uint32_t c;
        for(c = 0; c < 8; c++){
            output[0] = a[0];
            output[1] = a[1] + a[3];
            output[2] = a[2] + a[4] + a[6];
            output[3] = a[5] + a[7] + a[9];
            output[4] = a[8] + a[10] + a[12];
            output[5] = a[11] + a[13] + a[15];
            output[6] = a[14] + a[16];
            output[7] = a[17];

    }
        for(c = 0; c < 8; c++){
            output[c];
    }

    float matstor[8] = {0.500000,  0.700000,  1.000000, 0.500000, 0.300000,  0.000000,  0.000000,  0.000000};
    uint32_t m;
    for(m = 0; m < 8; m++){
        matstor[m];}
        if (matstor[m] == output[c]){
            printf("pass, discrete time convolution is successful\n");
        } else{
            printf("fail, convolution output is incorrect\n");
            }
    return 0;
}

