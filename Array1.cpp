#include<iostream>
using namespace std;
int main()
{

    int arr[5]{5,6};
    arr[0] = 7;
    arr[1] = 6;
    cout<< arr[0]<<"\n";
    cout<< arr[1]<<"\n";
    cout<< arr[2]<<"\n";
    cout<< arr[3]<<"\n";
    cout<< arr[4]<<"\n";

    cout<<"Sum of two location is \t"<< arr[0]+arr[1];

    return (0);


}
