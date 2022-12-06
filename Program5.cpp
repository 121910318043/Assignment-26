#include<iostream>
/*Define a class Date and write a program to Display Date and initialize date object
using Constructors.*/
using namespace std;
class Date{
private:
    int day,mon,year;
public:
    Date(int x,int y,int z){
        day=x;
        mon=y;
        year=z;
    }
    Date(){
        day=12;
        mon=6;
        year=2022;
    }
    void SetDate()
    {
        cout<<"Enter Day ";
        cin>>day;
        cout<<"Enter month ";
        cin>>mon;
        cout<<"Enter year ";
        cin>>year;
    }
    void DisplayDate()
    {
        cout<<day<<"/"<<mon<<"/"<<year;
    }
};
int main()
{
    Date D1;
    D1.DisplayDate();
    cout<<endl;
    D1.SetDate();
    D1.DisplayDate();
    return 0;
}
