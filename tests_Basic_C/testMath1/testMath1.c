#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#define PI 3.14159265

//checking a few math functions


int main(){

    float a, b, f, g;
    uint32_t c, h;
    float d, dlog, e, elog10, i;
    float fract_i;
    double integ_i;

    a = 1.6;
    b = 1.2;
    c = 1123;
    d = 2.6;
    e = 10000;
    f = 14.2;
    g = 7.2;
    h = 3;
    i = 8.3245;


    float z, y, x, r, s, p, o;
    z = ceil(a);
    y = floor(b);
    x = fabs(c);
    dlog = log(d);
    elog10 = log10(e);
    r = sqrt(25.0);
    s = pow(3.0, 3);
    p = fmod(f, g);

    fract_i = modf(i, &integ_i);
    o = integ_i;

    if(z==2.0){
        printf("pass for Ceil function\n");
        }
            else{
            printf("fail for Ceil function\n");
            }


      if(y==1.0){
        printf("pass for Floor function\n");
        }
            else{
            printf("fail for Floor function\n");
            }

         if(x==1123.0){
        printf("pass for absolute value in fabs function\n");
        }
            else{
            printf("fail for absolute value in fabs function\n");
            }

         if(elog10==4.000000){
        printf("pass for log10 function\n");
        }
            else{
            printf("fail for log10 function\n");
            }

        if(r==5.0){
        printf("pass for sqrt function\n");
        }
            else{
            printf("fail for sqrt function\n");
            }


       if(s==27.000000){
        printf("pass for pow function\n");
        }
            else{
            printf("fail for pow function\n");
            }


      if(p==7.000000){
        printf("pass remainder function fmod\n");
        }
            else{
            printf("fail remainder function fmod\n");
            }

      if(o==8.000000){
        printf("pass for integration of 8.3245 as 8.0000\n");
        }
            else{
            printf("fail for integration of 8.3245 as 8.0000\n");
            }


    return 0;
}

