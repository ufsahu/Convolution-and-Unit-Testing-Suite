#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying shift instruction 'sll' (R-Format)
//verifying variable values before and after Inline asm block 




int main()
{
   printf("Unit Test for Shift Instruction sll (R-Format)\n");
  
 uint32_t var_f, var_g, var_sll;
 var_f = 0x00000001;
 var_g = 2;
 var_sll = 0x00000000;
 //verifying variable before asm block
 if(var_sll==0x00000000){
	printf("Pass for var_sll == 0\n");
	}
 else{
	printf("Fail for var_sll != 0\n");
	}

 printf("Start before asm block\n");
 asm(	
      "sll %[c], %[f], %[g]\n"
      : [c] "+r" (var_sll) //saving output in var_sll
      : [f] "r" (var_f), [g] "r" (var_g)
    );
 printf("End after asm block\n");
 printf("Input value =  0x00000001\n");
 printf("sll operation shifting 2 bits to left\n");
 
 


 if(var_sll==0x0000004){
	printf("Pass for var_sll == 0x0000004\n");
	}
 else{
	printf("Fail for var_sll != 0x0000004\n");
	}
 

 return 0;
}

 
