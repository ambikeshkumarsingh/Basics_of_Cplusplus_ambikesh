# include <iostream>
using namespace std;
int sum(int x , int y)
{
    int sum = x+y;
    return(sum);
}
int sub(int x, int y)
{
    int sub =x-y;
    return(sub);
}
int mod(int x , int y)
{
    int mod = x % y;
    return mod;
}
int main()
{
    int first_num, sec_num,res;
    cin >>first_num;
    cin>>sec_num;
    res = sum(first_num, sec_num);
    cout<<res;
    cout<<"\n";
    res = sub(first_num,sec_num);
    cout<<res;
    res = mod(first_num,sec_num);
    cout<<"\n"<<res;
    return(0);
}