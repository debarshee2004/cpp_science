#include <iostream>

int get_value(){ 
    return 3;
}

int main(){
    int value = get_value();
    //Prints the output.
    std::cout << "value: " << value << std::endl; 
    // std::endl shifts the cursor to the next line.
    return 0;
}