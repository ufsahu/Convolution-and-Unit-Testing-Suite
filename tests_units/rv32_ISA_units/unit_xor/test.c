#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'xor' instruction (R-Format)
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
   printf("Unit Test for Instruction xor (R-Format)\n");
   uint32_t var_d, var_e, var_xor;

	var_d = 0x00000000;
	var_e = 0x00000001;
	var_xor = 0x00000000;

 if(var_xor==0){
	printf("Pass for variable var_xor == 0, before asm block\n");
	}
   else{
	printf("Fail for for variable var_xor == 0, before asm block\n");
	}

 printf("Start before asm block\n");
   asm(	
	"xor %[c], %[d], %[e]\n"
         : [c] "+r" (var_xor)
         : [d] "r" (var_d), [e] "r" (var_e)
    );
  printf("End after asm block\n");

  printf("Input value_1 =  0x00000000\n");
  printf("Input value_2 =  0x00000001\n");
  printf("XOR operation performed on above values and stored in variable var_xor \n");
  printf("Printing Output var_xor \n");
  print32_hex(var_xor);
  printf("\n"); 

if(var_xor==1){
	printf("Pass for xor instruction var_xor == 0x00000001\n");
	}
   else{
	printf("Fail for xor instruction var_xor != 0x00000001\n");
	}

 return 0;
}


