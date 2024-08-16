/*
    The char data type is often used to store individual characters, 
    but it can also store small integers (because of its underlying numerical representation). 
    Characters in C++ are enclosed in single quotes, e.g., 'A', '1', or '#'.
*/


#include <iostream>

int main() {
    char letter = 'A';
    char digit = '5';
    char symbol = '$';

    std::cout << "Letter: " << letter << "\n";
    std::cout << "Digit: " << digit << "\n";
    std::cout << "Symbol: " << symbol << "\n";

    return 0;
}