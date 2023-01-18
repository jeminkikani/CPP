#include<iostream>
using namespace std;
class test
{
    public:
    void add(int a)
    {
        cout<<"addition of a and b :- "<<a+a<<endl;
    }
    void mul(int x, int y)
    {
        cout<<"multiplication of x and y :- "<<x*y<<endl;
    }
    void sub(double j,double k)
    {
        cout<<"addition of j and y :- "<<j-k<<endl;
    }
};
int main()
{
    test a;
    a.add(10);
    a.mul(10,20);
    a.sub(45.30,35.10);
}