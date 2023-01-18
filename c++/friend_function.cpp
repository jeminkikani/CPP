#include<iostream>
using namespace std;
class number
{
    int a,b;
    friend int largenum(number);
    public:
    void setdata(int x,int y);   
};
void number :: setdata(int x,int y)
{
    a = x;
    b = y;
}     
int largenum(number t)
{
    if(t.a > t.b)
    {
        return t.a;
    }
    else
    {
        return t.b;
    }
}
int main()
{
    number p;
    p.setdata(10,20);
    cout<<"large number is :- "<<largenum(p);
}

