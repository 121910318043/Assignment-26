#include<iostream>
using namespace std;
/*Define a class Box and write a program to enter length, breadth and height and
initialize objects using constructor also define member functions to calculate volume
of the box.*/
class Box{
private:
    int length;
    int breadth;
    int height;
    int volume;
public:
    Box(int x,int y,int z){
        length = x;
        breadth = y;
        height = z;
    }
    Box(){
        length = 1;
        breadth = 1;
        height = 1;
    }
    void CalculateVolume()
    {
        volume = length*breadth*height;
    }
    void DisplayVolume()
    {
        cout<<volume;
    }
};
int main()
{
    Box B1(1,2,3);
    B1.CalculateVolume();
    B1.DisplayVolume();
    return 0;
}
