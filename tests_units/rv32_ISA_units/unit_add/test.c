#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'add' instruction (R-Format)
//verifying variable values before and after Inline asm block 





int main()
{
   printf("Unit Test for Instruction add (R-Format)\n");
   uint32_t var_a, var_b, var_add;

	var_a = 0x00000002;
	var_b = 0x00000001;
	var_add = 0x00000000;


 if(var_add==0){
	printf("Pass for variable var_add == 0, before asm block\n");
	}
   else{
	printf("Fail for variable var_add != 0, before asm block\n");
	}

 printf("Start before asm block\n");
   asm(	
	"add %[c], %[a], %[b]\n"
         : [c] "+r" (var_add)
         : [a] "r" (var_a), [b] "r" (var_b)
    );
  printf("End after asm block\n ");

  

if(var_add==3){
	printf("Pass for add instruction var_add == 3\n");
	}
   else{
	printf("Fail for add instruction var_add != 3\n");
	}
  


 return 0;
}
 

