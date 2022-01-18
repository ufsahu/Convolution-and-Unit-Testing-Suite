#include <stdio.h>
#include <stdlib.h>
#include <rt/rt_api.h>
#include <stdint.h>

//verifying 'sub' instruction (R-Format)
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
  printf("Printing Output var_sub = 2 - 1 using Sirpa's printf solution:  \n");
  print32_hex(var_sub);
  printf("\n"); 

if(var_sub==1){
	printf("Pass for sub instruction var_sub == 1\n");
	}
   else{
	printf("Fail for sub instruction var_sub != 1\n");
	}
  


 return 0;
}
 


