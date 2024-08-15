#include <iostream>

int main(){
    int score=10;

    std::cout<<score;//when we want to output a variable, we don’t add double quotes around its name.
    
    /*
    << (after std::cout): This operator is used to send the value of score to the output stream (std::cout). 
    It essentially says, "Take the value of score and print it to the console.    
    */


   //understanding double `<<` 

   /*
   std::cout<<score<<"\n";
        First <<: It prints the value of score.
        Second <<: It adds a newline character ("\n") after the value of score, so the next output starts on a new line.

   */

}