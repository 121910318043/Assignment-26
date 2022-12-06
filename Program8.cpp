#include<iostream>
using namespace std;
/*Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialize all details using constructor.*/
class Bank{
private:
    int P,R,T;
    float SI;
public:
    Bank(){
        cout<<"Enter Principal ";
        cin>>P;
        cout<<"Enter Rate ";
        cin>>R;
        cout<<"Enter Duration ";
        cin>>T;
    }
    Bank(int _p,int _r,int _t)
    {
        P=_p;
        R=_r;
        T=_t;
    }
    void CalculateSI()
    {
        SI = (P*R*T)/100.0;
    }
    void ShowSI()
    {
        cout<<"Simple Interest = Rs "<<SI<<"/-";
    }
};
int main()
{
    Bank E1;
    E1.CalculateSI();
    E1.ShowSI();
    return 0;
}
