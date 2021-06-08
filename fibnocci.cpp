#include <iostream>
using namespace std;
int main()
{
    int start =0;
    int one =1;
    int n;
    int i=0;
     cout <<"Enter the number:"<<"\n";
     cin >>n;

    cout<<start <<"\t" <<one <<"\t";

    while(i != n)
    {

      int next = start + one;
      cout <<"\t"<< next;
      ++ i;

    }

    return (0);

}
