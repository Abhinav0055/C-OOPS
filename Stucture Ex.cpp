#include <iostream>

using namespace std;

struct student{
    int rollno;
    float marks;
    int phoneno;
    char name[20];
};

int main()
{
    student S1;
    cout<<"Enter Student Details :-";
    cin>>S1.rollno>>S1.marks>>S1.phoneno>>S1.name;
    cout<<"Students Details are :- ";
    cout<<" Rollno :-"<<S1.rollno<<" Marks :-"<<S1.marks<<" Phoneno"<<S1.phoneno<<" Name :-"<<S1.name;

    return 0;
}

