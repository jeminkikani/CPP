// area find solid shape
#include<iostream>
using namespace std;
class varius
{
    public:
    varius()
    {
        cout<<"\tDEFULT CONSTRUCTOR VARIUS SHAPES......"<<endl;
    }
    varius(int radius)
    {
        int area;
        area = 3.14*(radius*radius);
        cout<<"Circle Area : "<<area<<endl;                                        
    }
    varius(int height,int base)
    {
        cout<<"Triangle  Area :"<<( height * base ) / 2<<endl;
    }
    varius(double x)
    {
        cout<<"Square Area : "<<x * x<<endl;
    }
    varius (double h,double w)
    {
        cout<<"Rectangle Area : "<<(h * w)<<endl;
    }
}; 
int main()
{
    varius a,b(5),c(32,24),d(60.0),e(30.0,60.0);
}