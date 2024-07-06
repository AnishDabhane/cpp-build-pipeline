/*
This example demostrates how the compiler converts the C++ code into assembly language.

Actually there are two methods to assembly language code from C++ code:

01] Using the -S flag with the g++ command.
    Command to preprocess the file: g++ -E main.cpp -o main.i
    Command to get assembly language code: g++ -S main.i -o main.s
02] Using the -c flag with the g++ command.
    Command to compile the file: g++ -c main.cpp -o main.o 
    Command to disassemble the object file and generate the assembly code: objdump -d main.o > main.asm
    Note: The main.asm file contains the all the assembly code for the main.o file, it just contains 
    the assembly code for the main function. Also the hex code for the instructions in main function is 
    mentioned in the file.

Main.o contains low level machine instruction for all the instruction mentioned assembly language.

*/
int main(){
    int a = 2;
    a++;
}