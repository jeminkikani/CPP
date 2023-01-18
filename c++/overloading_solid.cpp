// volume find solid shape
#include <iostream>
using namespace std;
class solid
{
    int volume;

public:
    solid()
    {
        cout << "\tDEFAULT CON....SOLID SHAPE" << endl;
    }
    solid(int a)
    {
        volume = (a * a * a);
        cout << " Volume of Cube : " << volume << endl;
    }
    solid(int r, int h)
    {
        volume =  3.14 * (r*r) * h/3;
        cout << "Volume of Circle Cone : " << volume << endl;
    }
    solid(float r)
    {
        volume = (4* 3.14 * (r*r*r))/3;
        cout << "Volume of Sphere : " << volume << endl;
    }
    solid(int l, int w,int h)
    {
        volume = (l * w * h)/3;
        cout << "Volume of Pyramid Square : " << volume << endl;
    }
};
int main()
{
    solid a,b(15),c(18,22),d(6.0),e(30,90,60);
}