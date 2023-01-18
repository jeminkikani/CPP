#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"defult con. is called..."<<endl;
    }
    test(int j)
    {
        cout<<"parametarzied called j :- "<<j<<endl;
    }
    test(int x, int y)
    {
        cout<<"parametarzied called x+y :- "<<x+y<<endl;
    }
    test(int a, int b, int c)
    {
        cout<<"parametarzied called a+b+c :- "<<a+b+c<<endl;
    }
};
int main()
{
    test a,b(10),c(10,20),d(10,20,30);
}


