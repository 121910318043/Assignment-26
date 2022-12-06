#include<iostream>/*Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions*/
using namespace std;
class Time{
private:
    int h,m,s;
public:
    Time()
    {
        h=0,m=0,s=0;
    }
    void SetTime(int x,int y,int z)
    {

        if(z>59)
        {
            s=z%60;
            m=z/60;
        }else{s=z;}


        if(y+m>59)
        {
            h=(y+m)/60;
            m=(m+y)%60;
        }else{m=y+m;}


        if(x+h>23)
        {
            h=(h+x)%24;
        }else{h=h+x;}
    }
    void ShowTime()
    {
        cout<<h<<"Hr "<<m<<"min "<<s<<"sec ";
    }
    void Normalize()
    {
        h=0,m=0,s=0;
    }
    Time add(Time T)
    {
        Time temp;
        temp.SetTime(h+T.h,m+T.m,s+T.s);
        return temp;
    }
};
int main()
{
    Time T1,T2,T3;
    cout<<"T2 = ";
    T1.SetTime(4,45,30);
    T1.ShowTime();
    cout<<endl;
    cout<<"T2 = ";
    T2.SetTime(2,10,30);
    T2.ShowTime();
    cout<<endl;
    T3=T1.add(T2);
    cout<<"T3 time after adding T1,T2 = ";
    T3.ShowTime();
    return 0;
}
