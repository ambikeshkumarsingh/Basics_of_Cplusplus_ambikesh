#include<iostream>
using namespace std;
int main()
{
    int i,rows;
    cout<<"Enter the size of array: \t";
    cin >> rows;

    int arr[rows];

    //taking input form user in 1 D array.
   for ( i =0 ; i < rows; i ++)
   {
       cout<<"The value at index  " << i <<" is: \t" ;
       cin >> arr[i];
   }
   cout<<"User inputs are \n";
   // printing the input;
   for(i=0; i < rows ; i++)
   {
       cout<< "Position  " << i <<  "  value entered  is :  \t" << arr[i] <<"\n";
   }
    return(0);

}
