#include<iostream>
/*Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts.*/
using namespace std;
class Complex{
private:
    int a;
    int b;
public:
    Complex()
    {
        a=0;
        b=0;
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<"+"<<b<<"i";
    }
    Complex add(Complex C)
    {
        Complex T;
        T.a = a + C.a;
        T.b = b + C.b;
        return T;
    }
};
int main()
{
    Complex C1,C2,C3;
    C1.setData(2,3);
    C1.showData();
    cout<<endl;
    C2.setData(5,3);
    C2.showData();
    cout<<endl;
    C3=C1.add(C2);
    cout<<endl;
    C3.showData();
    return 0;
}
