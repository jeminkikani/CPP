#include<iostream>
using namespace std;
class Base
{
    public:
    int n;
    void setdata()
    {
        cout<<"enter n num :- ";
        cin>>n;
    }
};
class derived : public Base
{
    public:
    void getdata()
    {
        cout<<"num of n :- "<<n;
    }
}; 
int main()
{
    derived a;
    a.setdata();
    a.getdata();
}