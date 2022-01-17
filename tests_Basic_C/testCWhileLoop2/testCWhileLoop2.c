#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>


//increasing iteration in same WhileLoop test to make test exhaustive, it shows test completed at the end.
//it takes 7 min and 37 seconds


int main()
{
    printf("Performance Test\n");

    uint32_t c = 1;
    while( c <= 3000){
        c++;
        //printf("%d \n", c);
        printf("Test loop \n");
    }
    if(c == 3001){
         printf("Test completed \n");
    }

    return 0;
}
