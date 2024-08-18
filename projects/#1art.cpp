/*
Objective:
    To display letters (or other characters) in a way that they appear aligned horizontally, 
    making it possible to create patterns or simple designs.
*/

/*
Example:
    If you want to print the letters A, B, C, and D next to each other, 
    you would need to ensure that each letter is printed in the same row across the output, 
    aligning them correctly so that they form a cohesive and visually appealing layout.
*/






//solution
#include <iostream>
int main() {
    // big brain:)
    std::cout << "    A       B       C       D    \n";
    std::cout << "   A A     B B     C C     D D   \n";
    std::cout << "  A   A   B   B   C   C   D   D  \n";
    std::cout << " A A A A B B B B C C C C D D D D \n";
    std::cout << " A     A B     B C     C D     D \n";
    std::cout << " A     A B     B C     C D     D \n";
    
    return 0;
}
