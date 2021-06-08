#include<iostream>
using namespace std;
int main()
{

int rows, col , i,j;
cout<<"Enter the number of rows you want: \t";
cin>> rows ;
cout<<"\n";
cout<<"Enter the number of columns you want: \t";
cin>> col;
int matrix[rows][col];

cout<<"Taking input from user :>>>>>>>>>><<<<<<<<\n";
for (i =0; i<rows; i++)
{
    for (j=0; j<col;j++)
    {
        cout<<"Enter the value at :" << i <<" rows and " << j << " column  : \t" ;
        cin>> matrix[i][j];
    }
     cout<<"\n";
}
cout<<"printing the entered inputs <<<<<<<>>>>>>>>\n";
for (i =0; i<rows; i++)
{
    for (j=0; j<col; j++)
    {
        cout<< matrix[i][j] <<"\t";
    }
    cout<<"\n";
}
return (0);
}
