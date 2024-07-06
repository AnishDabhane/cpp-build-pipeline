/*
This example demonstrates how to use macros and how they work.

Command to preprocess the file: g++ -E main.cpp -o main.i

After preprocessing this file , we will get main.i file which
will contain the code with macros replaced by their values.
*/

#define open_brace {
#define close_brace }

int main()
open_brace
    int a = 2;
    a++;
close_brace