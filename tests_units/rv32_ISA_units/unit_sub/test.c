#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'sub' instruction (R-Format)
//verifying variable values before and after Inline asm block 





int main()
{
   printf("Unit Test for Instruction sub (R-Format)\n");
   uint32_t var_a, var_b, var_sub;

	var_a = 0x00000002;
	var_b = 0x00000001;
	var_sub = 0x00000000;


 if(var_sub==0){
	printf("Pass for variable var_sub == 0, before asm block\n");
	}
   else{
	printf("Fail for variable var_sub != 0, before asm block\n");
	}

 printf("Start before asm block\n");
   asm(	
	"sub %[c], %[a], %[b]\n"
         : [c] "+r" (var_sub)
         : [a] "r" (var_a), [b] "r" (var_b)
    );
  printf("End after asm block\n");
  printf("Input value_1 =  0x00000002\n");
  printf("Input value_2 =  0x00000001\n");
  printf("Subtracting value_2 from value_1 and stored in variable var_sub \n");
  

if(var_sub==1){
	printf("Pass for sub instruction var_sub == 1\n");
	}
   else{
	printf("Fail for sub instruction var_sub != 1\n");
	}
  


 return 0;
}
 


