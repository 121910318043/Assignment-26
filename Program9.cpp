#include<iostream>
#include<string.h>
using namespace std;
/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :*/
class Bill{
private:
    int cid;
    char cname[20];
    int cphno;
    int units;
    float Cbill;
public:
    Bill(int x,char n[],int z)
    {
        cid = x;
        strcpy(cname,n);
        cphno = z;
    }
    Bill(){
        cout<<"Enter CustomerId ";
        cin>>cid;
        cout<<"Enter CustomerName ";
        cin>>cid;
        cout<<"Enter CustomerPhno ";
        cin>>cphno;
        cout<<"Please Enter Units ";
        cin>>units;
    }
    void SetUnits(int x)
    {
        units = x;
    }
    static void calculateBill(Bill &B)
    {
        if(B.units<100 && B.units>-1)
        {
        B.Cbill = 1.20 * B.units;
        }
         else if(B.units<200)
        {
            B.Cbill = (1.20*100) + (B.units-100)*2;
        }else{
            B.Cbill = (1.20*100) + (2*100) + (B.units-200)*3;
        }
    }
    void ShowBill()
    {
        cout<<Cbill;
    }
};
int main()
{
    Bill B1(1,"Deepu",123456789);
    B1.SetUnits(1);
    Bill::calculateBill(B1);
    B1.ShowBill();
    return 0;
}
