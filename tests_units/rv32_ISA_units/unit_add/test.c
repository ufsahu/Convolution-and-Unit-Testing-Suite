#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'add' instruction (R-Format)
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

  printf("Printing Output var_add = 2 + 1:  \n");
  print32_hex(var_add);
  printf("\n"); 

if(var_add==3){
	printf("Pass for add instruction var_add == 3\n");
	}
   else{
	printf("Fail for add instruction var_add != 3\n");
	}
  


 return 0;
}
 

