#include <iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    string name;
    cout<<"Enter the age:" << "\t";
    cin>>age;
    cout<<"Enter the name:" <<"\t";
    getline(cin , name);
    cout<<"So your name is: " <<name <<" & and your age is: " <<age;
    return 0;

}

