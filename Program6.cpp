#include<iostream>
#include<string.h>
using namespace std;
/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/
class Student{
private:
    char Sname[20];
    int rollno;
    char Grade;
    int phno;
public:
    Student(char a[],int R,char G,int p)
    {
        strcpy(Sname,a);
        rollno = R;
        Grade = G;
        phno = p;
    }
    Student(){
        cout<<"Enter Student's Name: ";
        cin.getline(Sname,20);
        cout<<"Enter Student's RollNo: ";
        cin>>rollno;
        cout<<"Enter Student's Grade: ";
        cin>>Grade;
        cout<<"Enter Student's phno: ";
        cin>>phno;
    }
    void DisplayStudent()
    {
        cout<<"Student name = "<<Sname<<endl;
        cout<<"Student RollNo = "<<rollno<<endl;
        cout<<"Student Grade = "<<Grade<<endl;
        cout<<"Student Phno = "<<phno<<endl;
    }
};
int main()
{
    char a[20]="suraj";
    Student S1(a,21,'A',123409129);
    S1.DisplayStudent();
    cout<<endl;
    Student S2;
    S2.DisplayStudent();
    return 0;
}
