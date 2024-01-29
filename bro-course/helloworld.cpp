#include <iostream>

int main() {
    std::cout << "I like pizaa!" << '\n';   //Better performance
    std::cout << "It's really good!" << std::endl;  //Flush the output buffer
    return 0;
}