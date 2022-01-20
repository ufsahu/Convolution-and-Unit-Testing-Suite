#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'and' instruction (R-Format)
//verifying variable values before and after Inline asm block 








int main()
{
   printf("Unit Test for Instruction and (R-Format)\n");
   uint32_t var_d, var_e, var_and;

	
	var_d = 0x00000000;
	var_e = 0x00000001;
	var_and = 0x00000000;


 if(var_and==0){
	printf("Pass for variable var_and == 0, before asm block \n");
	}
   else{
	printf("Fail for variable var_and != 0, before asm block \n");
	}

 printf("Start before asm block \n");
   asm(	
	"and %[c], %[d], %[e]\n"
         : [c] "+r" (var_and)
         : [d] "r" (var_d), [e] "r" (var_e)
    );
  printf("End after asm block \n");


if(var_and==0){
	printf("Pass for and instruction var_and == 0\n");
	}
   else{
	printf("Fail for and instruction var_and != 0\n");
	}

  printf("\n");


 return 0;
}
 

