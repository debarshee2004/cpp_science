#include <iostream>

int main(){
    int age;
    std::string full_name;

    std::cout << "Please type in your full name: " << std::endl;
    // It helps us to take input with space in between.
    std::getline(std::cin,full_name);

    std::cout << "Type in your age: " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;
}