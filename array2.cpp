// printing the value of a 1-D array
#include<iostream>
using namespace std;
int main()
{
    int a[]{10,12,16,52,96};
    int  i;
    int sum =0;
    int  n = sizeof(a) / sizeof(a[0]) ;

    for (i=0 ; i< n ; i++)
    {
        cout<<a[i]<<"\n";
    }
return(0);
}

