#include<iostream>
using namespace std;
class base 
{
    public:
    virtual void display() = 0; // pure virtual function 
};
class derived : public base
{
    public:
    void display()
    {
        cout<<"derived class called..."<<endl;
    }  
};
int main()
{
    base *p;
    derived a;
    p = &a;
    p -> display();
}