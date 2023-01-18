// add();
#include<iostream>
using namespace std;
class num
{
    int a,b;
    friend num add(num,num);
    public:
    void setdata(int x , int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
    cout<<"Num is ="<<a<<"+"<<b<<endl;
    }
};
num add(num p,num q)
{
    num z;
    z.a = p.a + q.a;
    z.b = p.b + q.b;
    return z;
}
int main()
{
    num a,b,c;
    a.setdata(2,3);
    b.setdata(4,6);
    c = add(a,b);
    c.getdata();
}


