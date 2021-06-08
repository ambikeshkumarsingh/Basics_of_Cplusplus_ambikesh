#include <iostream>
using namespace std;

int main(){
  int a  = 8;                        // copy initialization of variable
  int  b(10);                        // Direct initialization
  int  c ={11};                      // copy brace initialization
  int d{12} ;                       //  direct brace initialization of value 5 into variable width (preferred)

  cout<<"value of a is:" << a +b+ c+d ;
  return(0);

 }
