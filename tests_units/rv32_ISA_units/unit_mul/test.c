#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'mul' instruction (R-Format)
//verifying variable values before and after Inline asm block 


void print32_hex(uint32_t number)

{
  int k;
  int ch;

  for (k = 0; k < 8; k++)
  {
    ch = (number & 0xF0000000) >> 28; // Shift most significant 4 bits to low 4 bits
    if (ch < 10)
      ch = ch + '0';                  // If ch = 0 - 9, add ascii '0'
    else
      ch = ch + 'A' - 10;             // If ch = A - F, add ascii 'A' - 10
    putchar (ch);
    number = number << 4;          // Shift next 4 bits to MS bits
  }
}



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
 
  printf("Printing Output var_mul = 2 x 1: using Sirpa's printf solution\n");
  print32_hex(var_mul);
  printf("\n"); 

if(var_mul==0x00000002){
	printf("Pass for var_mul == 0x00000002\n");
	}
   else{
	printf("Fail for var_sub != 0x00000002\n");
	}


 
 return 0;
}

