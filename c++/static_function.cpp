#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    static int count;
    void setdata(int x, int y,int z)
    {
        l = x;
        b = y; 
        h = z;
        ++count;
    }
    int getdata()
    {
        return l*b*h;
    }
    static int Objectcount()
    {
        return count;
    }
};
int Box :: count = 0;
int main()
{
    cout<<"Initial stage :"<<Box :: Objectcount()<<endl;
    Box a,b;
    a.setdata(2,2,2);
    b.setdata(3,3,3);
    cout<<"Value of Box A is :"<<a.getdata()<<endl;
    cout<<"Value of Box B is :"<<b.getdata()<<endl;
    cout<<"Final Stage :"<<Box :: Objectcount()<<endl;
}m 