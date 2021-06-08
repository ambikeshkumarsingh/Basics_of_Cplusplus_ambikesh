#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<"\n";
    cin>>n;
    int i =1;
    cout<<"The table of : " << n << " is:-" <<"\n";
    while(i <=10)
    {
        cout<< n*i <<"\n";
        i++;
    }
    return(0);
}
