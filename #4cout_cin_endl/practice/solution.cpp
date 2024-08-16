#include <iostream>

int main() {
  
  double tempf;//double datatype as we need point values not whole number
  std::cout<<"Enter temperature in Fahrenheit (F): ";
  std::cin>>tempf;

  double celsius=(tempf-32)/1.8;

  std::cout<<"The temp is "<<celsius<< " degrees celsius.\n";  
  
}