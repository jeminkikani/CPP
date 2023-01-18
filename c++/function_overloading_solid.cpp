//area of shape
#include<iostream>
using namespace std;
class varius
{
    int area;
    public:
    void variuse()
    {
        cout<<"\t\t\t::::::::::::varius shapes::::::::::::"<<endl;
    }
    void variuse(int radius)
    {
        area = 3.14*(radius*radius);
        cout<<"\t\t\t\tCircle Area : "<<area<<endl;
    }
    void variuse(int height,int base)
    {
        area =( height * base ) / 2;
        cout<<"\t\t\t\tTriangle  Area :"<<area<<endl;
    }
    void variuse(double x)
    {
        area = x * x;
        cout<<"\t\t\t\tSquare Area : "<<area<<endl;
    }
    void variuse(double h,double w)
    {
        area = (h * w);
        cout<<"\t\t\t\tRectangle Area : "<<area<<endl;
    }
};
int main()
{
    varius a;
    a.variuse();
    a.variuse(5);
    a.variuse(32,24);
    a.variuse(60.0);
    a.variuse(30.0,60.0);
}