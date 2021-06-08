// Using srand()  you can implement random number.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(9687);
    for (int i= 1; i<=100; i++)
    {
        cout<<rand() <<"\t";
        if (i % 5 == 0)
        {
           cout<<"\n";
        }
    }
    return(0);
}

