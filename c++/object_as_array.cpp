#include<iostream>
using namespace std;
class Test
{
    int real,img;
    public:
    void setdata()
    {
        cout<<"Enter Real Number :- "n;
        cin>>real;
        cout<<"Enter Img Number :- ";
        cin>>img;
    }
    void getdata()
    {
        cout<<"num is :- "<<real<<"+"<<img<<"i"<<endl<<endl;
    }
};
int main()
{
    Test a[5];
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter Detail is :-"<<i+1<<endl;
        a[i].setdata();
        cout<<endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<"Detail is :-"<<i+1<<endl;
        a[i].getdata();
        cout<<endl;
    }
    
}

