// this pointer
#include<iostream>
using namespace std;
class Box{
    int l, b,h;
    public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void getdata()
    {
        cout<<"Volue of Box is: "<<l*b*h;
    }
};
class get : public Box
{
    public:
    get()
    {
        Box :: setData(2,3,4);
        Box :: getdata();
    }
};
int main()
{
    get a;
}