#include<iostream>/*Define a class Counter and Write a program to Show Counter using Constructor.*/
using namespace std;
class Counter{
private:
    static int count1;
public:
    Counter(int x){
        count1=x;
    }
    Counter(){}
    void Increment()
    {
        count1++;
    }
    void Decrement()
    {
        count1--;
        if(count1<0)
            count1=0;
    }
    void IncreamentByVal(int i)
    {
        count1=count1+i;
    }
    void DecrementByVal(int i)
    {
        count1=count1-i;
        if(count1<-1)
            Decrement();
    }
    void CountReset()
    {
        count1=0;
    }
    void Display()
    {
        cout<<count1;
    }
    ~Counter(){cout<<endl<<"Destructor called";}
};
int Counter::count1=0;
int main()
{
    Counter Co(2);
    Co.Display();
    cout<<endl;
    Co.DecrementByVal(1);
    Co.Display();
    cout<<endl;
    Co.CountReset();
    Co.Display();
    return 0;
}
