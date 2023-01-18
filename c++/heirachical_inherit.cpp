#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor is called...."<<endl;
    }
};
class Derived1 : public Base
{
    public:
    Derived1()                                                                                                                      
    {
        cout<<"Derived1 Constructor is called...."<<endl;
    }
};
class Derived2 : public Base
{
    public:
    Derived2()
    {
        cout<<"Derived2 Constructor is called...."<<endl;
    }
};
int main()
{
    Derived1 a;
    Derived2 b;
}
