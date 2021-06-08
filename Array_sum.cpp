#include<iostream>
using namespace  std;
int main()
{
    int rows1,col1,i,j,row2,col2;
    /*Taking the number on rows and col for matrix 1*/
    cout<<"Enter the number of rows:\t";
    cin>>rows1;
    cout<<"Enter the number of columns:\t";
    cin>>col1;
    int matrix1[rows1][col1];
    /*Inserting value into Matrix1*/
    for(i=0;i<rows1;i++)
    {
        for (j=0;j<col1;j++)
        {
            cout<<"The value at row: " <<i+1 <<" and col: "<<j+1 <<" is:\t" ;
            cin >>matrix1[i][j];
        }
    }
    cout<<"\n";
    cout<<"Matrix1 \n";
    /*Printing the Matrix1*/
    for(i = 0; i<rows1; i++)
    {
        for (j=0;j<col1 ; j++)
        {
            cout<< matrix1[i][j] <<"\t";
        }
        cout<<"\n";
    }
    /*Taking the number on rows and col for matrix 2 */

    cout<<"Enter the number of rows for matrix 2: \t";
    cin>>row2;
    cout<<"Enter the number of col for matrix 2: \t";
    cin>>col2;
    int matrix2[row2][col2];
    /*Inserting value into Matrix2 */
    for(i =0; i<row2;i++)
    {
        for(j=0; j<col2; j++)

        {
            cout<<"The value at row: " << i+1 << "and col: " <<j+1 <<"is: \t";
            cin>> matrix2[i][j];
        }
    }
    cout<<"\nMatrix 2:\n";
    /* Printing the Matrix2 */
    for (i=0; i<row2 ;i++)
    {
        for (j=0;j<col2 ; j++)
        {
            cout<<matrix2[i][j] <<"\t";
            
        }
        cout<<"\n";
    }
    /* Checking the dimensions of Matrix1 and Matrix2 */
    if (rows1 == row2 && col1 ==col2)
    {
        int result_matrix[rows1][col1]; 
        for(i =0;i<rows1 ; i++)
        {
            for (j=0;j<col1; j++)
            {
                result_matrix[i][j] = matrix1[i][j]+matrix2[i][j];
                cout<< result_matrix <<"\t";
            }
            cout<<"\n";
        }
    }
    else 
    {
        cout<<"Dimensions of Matrix1 and Matrix2 is not same";
    }
    return(0);
}