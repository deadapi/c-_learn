//Type Casting: Changing a value from one type to another 
//basics

#include <iostream>

int main(){

    double  a =120212.2323;

    // C-style type casting
    int a1 = (int)a; // Convert 'a' from double to int using C-style casting
    int a2 = int(a); // Convert 'a' from double to int using C-style casting

    std::cout << a1 << "\n" << a2;

    /*
    You can use both of the above C-style casts, but in modern C++, 
    we'll prefer C++ style casts for better clarity and safety.
    we will cover this in future)
    */

    //Note: Going from a double to an int simply removes the decimal. There’s no rounding involved.
    

}