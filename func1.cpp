#include <iostream>
using namespace std;
int sub (int a, int b)
{
    cout<<"Subtraction is : " << a-b <<endl;
}
int add(int a,int b)
{
    cout<<"Addition is: " <<a+b<<endl;

}
int mul(int a , int b)
{

    cout<<"Multiplication is :"<< a*b <<endl;
}
 int main()
 {
     int x,y;
     cout<<"Enter the numbers: " << endl;
     cin>> x >> y  ;
     sub(x,y);
     add(x,y);
     mul(x,y);
     return(0);

 }
