/*
    + addition
    - subtraction
    * multiplication
    / division
    % modulo (divides and gives the remainder)
*/

#include <iostream>

int main(){
    int world=0;

    /*
    Note:
        When you assign a new value to an existing variable in C++, 
        it overwrites the previous value stored in that variable.
    */

    world=1+1;
    //world is 2

    world=1-1;
    //it is now 0

    world=1*2;
    //it is now 2

    world=4/2;
    //and now 2

    world=5%2;
    //and now 1

}

/*
Note:   
    The order of operations can be specified using parentheses. For example, the use of parentheses in 
    score = 5 * (4 + 3) sets score equal to 5 * 7 rather than 20 + 3
*/