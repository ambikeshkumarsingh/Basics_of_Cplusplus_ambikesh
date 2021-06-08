#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    try_again :    // This is a label;
        cout<<"Enter a number:  " ;
        cin>>n ;
        cout<<"\n";
    if (n<0)
    {
        cout<<"Please enter  +ve number." <<"\n";
        goto try_again ;
    }
    cout<<"the square root of number is :  "<<sqrt(n);
    return (0);
}

