
/* 
In this example, we are using the Increment function from the increment.h header file.

Command to preprocess the file: g++ -E main.cpp -o main.i

After preprocessing this file , we will get main.i file which will contain all the code
from the iostream.h and increment.h header file.Note the contents of increment.h file 
will be added at the last of the main.i file. Thus ready for compilation.

Command to compile the file: g++ main.i -o main
Command to run the file: ./main

*/
#include <iostream>
#include "increment.h"

int main(){
    int a = 2;
    std::cout<<"Value of 'a'"<<std::endl;
    std::cout<<"Before incrementing: "<<a<<std::endl;
    // Increment fucntion is defined in the increment.h header file.
    Increment(a);
    std::cout<<"After incrementing: "<<a<<std::endl;
}

/*
Interesting thing to note is that all the comments which are part of this main.cpp file
gets removed, there are no comments in preprocessed file(main.i).
*/

