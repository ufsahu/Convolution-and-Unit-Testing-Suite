#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>


//keeping a higher iteration to make test exhaustive, it shows test completed at the end.


int main()
{
    printf("Performance Test\n");

    uint32_t c = 1;
    while( c <= 1000){
        c++;
        //printf("%d \n", c);
        printf("Test loop \n");
    }
    if(c == 1001){
         printf("Test completed \n");
    }

    return 0;
}
