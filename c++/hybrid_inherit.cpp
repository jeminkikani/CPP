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
class Derived2
{
    public: Derived2()
    {
        cout<<"Derived2 Constructor is called...."<<endl;
    }
};
class ABC : public Derived1 , public Derived2
{
    public:
    ABC()
    {
        cout<<"ABC Constructor is called...."<<endl;
    }
};
int main()
{
    ABC a;
}