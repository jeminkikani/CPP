#include<iostream>
using namespace std ;
class Num 
{
    int r,i;
    public:
    void setdata(int x , int y)
    {
        r=x , i=y ;
    }
    void getdata()
    {
        cout<<"Num is ="<<r<<"+"<<i<<"i"<<endl;
    }
    friend Num operator+(Num,Num);
};
Num operator+(Num a , Num b)
{
    Num z;
    z.r = a.r + b.r;
    z.i = a.i + b.i;
    return z;
}
int main()
{
    Num a,b,c;
    a.setdata(3,5);
    b.setdata(10,13);
    a.getdata();
    b.getdata();

    c=a+b;
    c.getdata();
}