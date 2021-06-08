#include <iostream>
#include <string>
using namespace std;

struct Emp
{
    string name;
    int age;
    int id;
    //string address;
};

view_info(Emp x)
{
    cout<< "Id is : \t" << x.id <<"\n";
    cout<<"Age is : \t"  << x.age <<"\n";
    cout<<"Name is :\t"<<x.name;
}
int main()
{
    Emp first;
    cout<<"Enter the first Employee id:" <<"\t" ;
    cin>> first.id;
    cout<<"Enter the first Employee age:" <<"\t";
    cin>>first.age;
    cout<<"Enter the first Employee name:" <<"\t";
    //getline(cin ,first.name);
    cin>>first.name;
    cout<<"\n";
    Emp second;
    cout<<"Enter the second Employee id:" <<"\t" ;
    cin>> second.id;
    cout<<"Enter the second Employee age:" <<"\t";
    cin>>second.age;
    cout<<"Enter the second Employee name:" <<"\t";
    //getline(cin, second.name);
    cin>>second.name;
    cout<<"Employee First details are: \n";
    view_info(first);
    cout<<"\n";
    cout<<"Employee Second details are :\n";
    view_info(second);


    return (0);
}
