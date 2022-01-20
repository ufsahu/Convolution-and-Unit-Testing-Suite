#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'or' instruction (R-Format)
//verifying variable values before and after Inline asm block 







int main()
{
   printf("Unit Test for Instruction or (R-Format)\n");
   uint32_t var_a, var_b, var_d, var_e, var_add, var_sub, var_mul, var_xor, var_and, var_or;


	var_d = 0x00000000;
	var_e = 0x00000001;
 	var_or = 0x00000000;
 
 if(var_or==0){
	printf("Pass for variable var_or == 0, before asm block\n");
	}
   else{
	printf("Fail for variable var_or != 0, before asm block\n");
	}

 printf("Start before asm block 6\n");
   asm(	
	"or %[c], %[d], %[e]\n"
         : [c] "+r" (var_or)
         : [d] "r" (var_d), [e] "r" (var_e)
    );
  printf("End after asm block 6\n");

 
if(var_or==1){
	printf("Pass for OR instruction var_or == 1\n");
	}
   else{
	printf("Fail for OR instruction var_or != 1\n");
	}

  printf("\n"); 


 return 0;
}
 

