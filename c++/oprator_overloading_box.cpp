#include<iostream>
using namespace std;
class box
{
    int lenth,breath,height;
    public:
    int setdata(int l,int b,int h);
    void getdata();
    box operator*(box &k);
};
int box :: setdata(int l,int b,int h)
{
    lenth = l;
    breath = b;
    height = h;
    return l*b*h;
}
box box :: operator*(box &k)
{
    box d;
    d.lenth = lenth * k.lenth;
    d.breath = breath * k.breath;
    d. height = height * k.height;
    return d;
} 
void box :: getdata()
{
    cout<<"lenth  is :-  "<<lenth<<endl;
    cout<<"breth  is :- "<<breath<<endl;
    cout<<"height is :- "<<height<<endl;
}
int main()
{
    box a,b,c;
    a.setdata(2,2,2);
    a.getdata();
    b.setdata(4,4,4);
    b.getdata();
    c = a * b;
    c.getdata();
}




































































