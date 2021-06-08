#include <iostream>
using namespace std;
unsigned int rng()
{
    static unsigned int start=5223;
    start = 823364 *  start + 89554;
    return start % 12563 ;
}
int main()
{
    int i ,n;
    int count =0 ;
    cout<<"Enter the total number of random  number:" <<"\t" ;
    cin>>n;
    for (i=1; i <=n; i++)
    {
        cout<< rng() <<"\t";
        if (i % 5==0)
        {
            cout<<"\n";
        }

    }

    return 0;
}
