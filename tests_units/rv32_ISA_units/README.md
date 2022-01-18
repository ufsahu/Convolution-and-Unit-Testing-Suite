# Unit Test Cases

For overcoming the limitations of printf function not working and 32bit datatype only being verified, unit test cases were developed.

For checking RISC-V instructions, these developed unit test cases are based on the RISC-V inline assembly in C.

There is a small solution that prints the hexadecimal value only.

Each test follows the basic logic of initially checking the variable data, performing instruction operation through RISC-V inline assembly code, printing the hexadecimal value and further verifying the performed instruction output with a simple if-else block. 



![image](https://user-images.githubusercontent.com/63293023/149923184-9ed76578-0c8f-4445-b81c-fd07af8a8c75.png)

