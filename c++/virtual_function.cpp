#include<iostream>
using namespace std;    
class base 
{
    public:
    virtual void display()
    {
        cout<<"base class called..."<<endl;
    }
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
    base *p,s;
    derived a;
    p = &a;
    p -> display();

    p = &s;
    p -> display();
}