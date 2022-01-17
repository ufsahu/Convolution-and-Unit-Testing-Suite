#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'and' instruction (R-Format)
//verifying variable values before and after Inline asm block 
//using Sirpa's printf solution




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

  printf("Printing Output of AND variable var_and = 0 . 1: \n");
  print32_hex(var_and);
  printf("\n"); 

if(var_and==0){
	printf("Pass for and instruction var_and == 0\n");
	}
   else{
	printf("Fail for and instruction var_and != 0\n");
	}

  printf("\n");


 return 0;
}
 

