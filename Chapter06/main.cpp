#include <iostream>

int main(){

    /*
    Types of INPUT/OUTPUT STEAMS:
    std::cout - Printing data to the console (terminal)
    std::cin  - Reading data from the terminal
    std::cerr - Printing errors to the console
    std::clog - Printing log messages to the console
    */
    
    int age;
    std::string name;

    std::cout << "Please type in your Last Name: " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age: " <<std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age <<" years old." << std::endl;
}