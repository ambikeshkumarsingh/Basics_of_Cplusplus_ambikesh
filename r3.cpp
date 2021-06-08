#include<iostream>
using namespace std;
struct Sdetails   // Creating a user defined data type"Sdetails"
{
    string st_name;
    int st_rollno;
    int age;
    int mobile;
};

view_info(Sdetails info)
{
    cout<<info.st_name<<"\n";
    cout<<info.st_rollno<<"\n";
    cout<<info.age<<"\n";
    cout<<info.mobile<<"\n";
}

int main()
{
    Sdetails first_student,second_student;

    cout<<"Enter the details of 1st student:\n";

    cout<<"name \t";
    cin>>first_student.st_name;
    cout<<"Roll no \t";
    cin>>first_student.st_rollno;
    cout<<"Age \t";
    cin>>first_student.age;
    cout<<"Mobile \t";
    cin>>first_student.mobile;

    cout<<"\n";

    /* Write for student 2 details and print 
        Similary write a loop for taking record of 10 students and print similary.
    */

    // Printing the Entered details
    cout<<"The entered details for student 1st is \n";
    view_info(first_student);

    return(0);

}
