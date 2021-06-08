#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int _sum = a+b ;
    cout<< _sum;
}
int main()
{
    int x,y;
    cout<<"Enter the numbers :" <<"\n";
    cin>>x>>y;
    sum(x,y);
    return(0);

}
