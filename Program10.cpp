#include<iostream>
using namespace std;
/*Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
class StaticCount{
private:
    static int var;
public:
    void countFunc(){
        var++;
        cout<<"called "<<var<<" time"<<endl;
    }
};
int StaticCount::var=0;
int main()
{
    StaticCount C1,C2,C3;
    C1.countFunc();
    C2.countFunc();
    C3.countFunc();
    return 0;
}
