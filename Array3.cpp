#include<iostream>
using namespace std;
int main()
{
    int row, column;
    int array [3][5]

    {
       {1,2,3,4,5},
       {6,7,8,9,10},
       {11,12,13,14,15}
       };
    for (row=0; row<3; row ++ )
    {
        for (column = 0 ; column< 5 ; column ++)
        {
            cout<<array[row][column] <<"\t";
        }
        cout<<"\n";
    }
    return(0);
}
