#include <iostream>

int main(){

    /*
    Types of INPUT/OUTPUT STEAMS:
    std::cout - Printing data to the console (terminal)
    std::cin  - Reading data from the terminal
    std::cerr - Printing errors to the console
    std::clog - Printing log messages to the console
    */
    
    // std::cout : Printing stuff to the console
    std::cout << "Hello World" <<std::endl;

    std::cout << "The age is: " << 12 << std::endl;

    int age {21};
    std::cout << "The age is: " << age << std::endl;

    // Error
    std::cerr << "std::cerr output: Something went wrong" << std::endl;

    // Log message
    std::clog << "std::cerr output: This is a log message" << std::endl;
}