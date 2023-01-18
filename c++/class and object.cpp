#include<iostream>
using namespace std;
class test
{
    private:
    int mark;
    public:
    void setdata (int m)
    {
        mark=m;
    }
    int getdata()
    {
        return mark;

    }
};

int main()
{
    test a,b;
    int x;
    a.setdata(100);
    cout<<"a mark is :"<<a.getdata()<<endl;
    b.setdata(200);
    cout<<"b mark is :"<<b.getdata()<<endl;

}