#include<iostream>
using namespace std;
int main()
{
    int first_num,sec_num,res;
    cin>>first_num;
    cin>>sec_num;
    if(first_num >= sec_num)
    {
        res = first_num -sec_num;
    }
    else{
        res = sec_num - first_num ;
    }
    cout<<res;
    return 0;
}