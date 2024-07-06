/*
This example demonstrates how contents of iostream.h gets added in main.i file after preprocessing.

Command to preprocess the file: g++ -E main.cpp -o main.i

Preprocessed file will contain defination of all the functions and classes defined in the iostream.h header file.
Thus ready for compilation.
Command to compile the file: g++ main.i -o main
Command to run the file: ./main
*/
#include <iostream>

int main(){
    int a = 2;
    a++;
    std::cout<<a<<std::endl;
}
