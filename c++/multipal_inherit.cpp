// multiple inheritance
#include<iostream>
using namespace std;
class Base1
{
    public:
    Base1()
    {
        cout<<"Base 1 Constructor is called...."<<endl;
    }
   
};
class Base2
{
    public:
    Base2()
    {
        cout<<"Base 2 Constructor is called...."<<endl;
    }
   
};
class Derived : public Base1, public Base2
{
    public:
    Derived()
    {
        cout<<"Derived Constructor is called...."<<endl;
    }
   
};
int main()
{
    Derived a;
}