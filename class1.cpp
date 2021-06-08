/*
This is the difference between a class and struct.
When you have to define a function along with data use class and 
for only data use struct.
Apart from that there is no diference between class and struct.
*/

#include<iostream>
using namespace std;
class Dateclass
{
    public:
        int year{};
        int month{};
        int day{};

        //Defining a function to print the contents. 
        view_date()
        {
            cout<<year <<"/"<<month <<"/" <<day <<"\n";
        }
};

int main()
{
    Dateclass today{2020,04,27};  // Inserting the value into user class
    today.view_date();
    
    //Acceesing and changing the element's value of class using .(dot)
    today.year = 2021;
    today.view_date();

return(0);
}


/*
Implement class for same prob using taking values from users and then 
print it.
*/