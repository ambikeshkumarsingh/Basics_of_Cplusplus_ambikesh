#include <iostream>
using namespace std;
unsigned int rngf()
{
    static int s = 124589;
    s = s* 11 + 1;
    return s % 12456 ;
}

int main()
{
    int n = 44;

    for (int count =1; count<=n ; count++)
    {
        cout<< rngf() <<"\t" ;
        if (count % 4 == 0)
        {
            cout<<"\n";
        }

    }
    return 0;
}
