#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'mul' instruction (R-Format)
//verifying variable values before and after Inline asm block 




int main()
{
   printf("Unit test for Instruction mul (R-Format)\n");
   uint32_t var_a, var_b, var_mul;

	var_a = 0x00000002;
	var_b = 0x00000001;
	var_mul = 0x00000000;


 if(var_mul==0x00000000){
	printf("Pass for variable var_mul == 0, before asm block\n");
	}
   else{
	printf("Fail for variable var_mul != 0, before asm block\n");
	}

 printf("Start before asm block\n");
   asm(	
	"mul %[c], %[a], %[b]\n"
         : [c] "+r" (var_mul)
         : [a] "r" (var_a), [b] "r" (var_b)
    );
  printf("End after asm block\n");

 printf("Input value1 =  0x00000001\n");
 printf("Input value2 =  0x00000002\n");
 
   

if(var_mul==0x00000002){
	printf("Pass for var_mul == 0x00000002\n");
	}
   else{
	printf("Fail for var_sub != 0x00000002\n");
	}


 
 return 0;
}

