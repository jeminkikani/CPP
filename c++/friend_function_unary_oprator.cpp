#include<iostream>
using namespace std;
class num
{
    int real,img;
    public:
    void setdata(int r,int i)
    {
        real = r;
        img = i;
    }
    void getdata()
    {
        cout<<"num is :- "<<real<<"+"<<img<<"i"<<endl<<endl;
    }
    friend num operator++(num);
};
num operator++
(num j)
{
    num z;
    z.real = ++j.real;
    z.img = ++j.img;
    return z;
}

int main()
{
    num a,b;
    a.setdata(10,20);
    cout<<"befor incriment :- ";
    a.getdata();
    b = ++a;
    cout<<"after incriment :- ";
    b.getdata();
}
