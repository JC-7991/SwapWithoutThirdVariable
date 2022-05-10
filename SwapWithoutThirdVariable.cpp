#include <iostream>  
 
int main(){

  int a = 46;
  int b = 752;      

  std::cout << "Before swap a = " << a << ", b = " << b << "\n";      
  a = a * b;    
  b = a / b;    
  a = a / b;    

  std::cout << "After swap a = " << a << ", b = " << b << "\n";      
  return 0; 

}  