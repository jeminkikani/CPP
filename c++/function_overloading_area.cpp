//volume of shape
#include <iostream>
using namespace std;
class shape
{
    int volume;

public:
    void solid()
    {
        cout << "\t\t\t:::::::::::::::SOLID SHAPE:::::::::::::" << endl;
    }
    void solid(int a)
    {
        cout <<"\t\t\t\tVolume of Cube :- " << (a * a * a) << endl;
    }
    void solid(int r, int h)
    {
        int volume =  3.14 * (r*r) * h/3;
        cout <<"\t\t\t\tVolume of Circle :- " << volume << endl;
    }
    void solid(double redius)
    {
        int volume = (4* 3.14 * (redius*redius*redius))/3;
        cout <<"\t\t\t\tVolume of Sphere :- " << volume << endl;
    }
    void solid(double lenth, double weight,double height)
    {
        int volume = (lenth * weight * height)/3;
        cout <<"\t\t\t\tVolume of Peramid :- " << volume << endl;
    }
};
int main()
{
    shape a;
    a.solid();
    a.solid(15);
    a.solid(20,40);
    a.solid(6.0);
    a.solid(30.0,90.0,60.0);
}