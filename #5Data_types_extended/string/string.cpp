// Unlike other data types, strings have their own library and a unique way of being handled in C++.
//std::string is a part of the C++ Standard Library and provides a more powerful and flexible way to work with strings 


#include <string> // library for string
#include <iostream>

int main() {
    std::string greeting = "Hello, World!"; 
    // Here we use std::string to declare a string variable, similar to how we use int to declare an integer variable

    std::cout << greeting << "\n";

    return 0;
}
