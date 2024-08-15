//Chaining allows you to easily combine different variables and text in one print statement.

#include <iostream>

int main()
{

    int age = 17;

    std::cout << "Hello, I am ";//We use quotes when we want a literal string. 
    std::cout << age;//We don’t use quotes when we refer to the value of something with a name (like a variable).
    std::cout << " years old\n";

    //Output
    //Hello, I am 28 years old

    //using chaining
    std::cout << "Hello, I am " << age << " years old\n";
    //Output
    //Hello, I am 28 years old

    /*
    Chaining with <<: 
        The << operator is used multiple times in a single line to "chain" together different pieces of output. 
        It starts with the string "Hello, I am ", then inserts the value of age, and finally adds " years old\n".
    */


}