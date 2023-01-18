#include<iostream>
using namespace std;
class num
{
    int real,img;
    public:
    void setdata(int r,int i);
    void getdata();
    num operator+(num &j);
};
void num :: setdata(int r,int i)
{
    real = r;
    img = i;
}
void num :: getdata()
{
    cout<<"num is :- "<<real<<"+"<<img<<"i"<<endl;
}
num num :: operator+(num &j)
{
    num z;
    z.real = real + j.real;
    z.img = img + j.img;
}

int main()
{
    num a,b,c;
    a.setdata(10,20);
    a.getdata();
    b.setdata(30,40);
    b.getdata();
    c = a + b;
    c.getdata();
}
