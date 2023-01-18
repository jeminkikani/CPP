#include<iostream>
using namespace std ;
class Num
{
    int real , img ;
    public :
    void setdata(int , int);
    void getdata()
    {
        cout<<"Num is ="<<real<<"+"<<img<<"i"<<endl;
    }
    Num operator -- ()
    {
        Num t;
        t.real=--real;
        t.img=--img;
        return t;
    }
};
void Num :: setdata(int r , int i )
{
    real = r ;      
    img = i ;
}
int main()
{
    Num a,b;
    a.setdata(2,3);
    a.getdata();
    cout<<"After decreament "<<endl;
    b=--a;
    b.getdata();
}
