#include<iostream>
/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/
using namespace std;
class Cube{
private:
    int side;
    int volume;
public:
    Cube(int x){
        side=x;
    }
    Cube(){side=0;}
    void CalculateVolume()
    {
        volume = side*side*side;
    }
    void GetVolume(){
    cout<<volume;
    }
    ~Cube(){cout<<endl<<"bye";}
};

int main(){
    Cube C1(3);
    C1.CalculateVolume();
    C1.GetVolume();
    return 0;
}
