#include <iostream>
#include<string>
using namespace std;
int calculator(int x, int y, char z)
{
    switch (z)
    {
    case '+':
        return x+y ;
    case '-':
        return x-y;
    case '*':
        return x*y;
    case '/':
        return x/y;
    default:
        cout<<"I got error:";
        return -1;
        }
    }
  int main()
  {
    int a,b;
    char op;
    cout<<"please  provide the inputs"<<"\n";
    cin >> a>>b;
    cout<<"Enter the operator{+,-,*,/} : "<<"\n";
    cin>> op;
    cout<< a << op << b <<" = "<< calculator(a,b,op);
    return (0);
  }

