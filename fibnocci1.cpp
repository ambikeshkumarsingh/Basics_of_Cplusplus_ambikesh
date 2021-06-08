#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,series_size;
    cin>>series_size;
    
    for(i = 0; i<series_size-1;i++)
    {
        cout<< sum +i<<"\t";
        sum = sum + i;
    }
    

}