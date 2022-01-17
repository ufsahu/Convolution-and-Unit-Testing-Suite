#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//checking just pass-fail

int main()
{
    uint32_t num1, num2;

    num1 = 10;
    num2 = 20;
printf("Hello \n");
    if(num2 > num1)
        printf("Pass, num2 is maximum \n");
    else{
        printf("Fail, num2 is not maximum \n");
    }
printf("Bye \n");
   return 0;
}
