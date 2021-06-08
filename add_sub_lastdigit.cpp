#include<iostream>
using namespace std;
int main()
{
    int number, result , rem;
    cin>>number;
    if(number % 2 == 0)
    {
        result = number / 10;   
    }
    else
    {
        rem = number % 10;
        result = number + rem;
    }
    cout<< result;
}
