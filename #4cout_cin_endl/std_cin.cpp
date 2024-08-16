//std::cin

/*
    In C++, std::cin is used to read input from the console. 
    It is part of the <iostream> library, which handles input and output operations.
*/

#include <iostream>

int main(){

    int age=0;
    std::cout<<"Enter you age:";
    std::cin >> age; // Here, we are reading input from the user and storing it in the variable 'age'.
    
    /*
        std::cin: 
            Refers to the standard input stream.
        >>: Extraction operator that reads data from std::cin.
            easy speaking The >> operator (extraction operator) takes the input provided by the user .
        Input Types: 
            std::cin can be used to read various data types, including integers, floats, and strings.
    */
   std::cout<<"your age is"<<age<<"\n";//printing back the age data we got from user.
}