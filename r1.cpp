#include<iostream>
using namespace std;
int i;

int factorial(int num)
{
    for(i=num-1;i>=2;i--)
    {
        num= num*i;
    }
    return num;
}


int reverse_of_number(int num)
{
    int rem,n1; int rev=0;
    n1=num;
    while(n1!=0)
    {
        rem = n1 % 10;
        n1 = n1 / 10;
        rev = rev*10 + rem;
    }
    return rev;


}
int main()
{
    int output1,n2,n3,output2;
    
    cout<<"Enter the number:\t";
    cin>>n2;
    /*For____factorial______Problem*/
    output1=factorial(n2);
    cout<<"The factorial for: "<<n2 <<" is\t" <<output1;

    //for____Reverse___of____number
    cout<<"\n";

    cout<<"Enter the number:\t";
    cin>>n3;
    output2 = reverse_of_number(n3);
    cout<<"Reverse of " << n3 <<" is\t"<<output2;

    cout<<"\n";

    //Checking___for___Pallendrome___number 
    if (output2 == n3)
    {
        cout<<"The entered number "<<n3 <<" is a palindrome number";
    }
    else
    {
        cout<<"The entered number "<<n3 <<" is not a palindrome number";
    }

    //Checking for Armstrong number:

    return(0);
}