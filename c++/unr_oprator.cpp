#include <iostream>
using namespace std;
class Num
{
    int real, img;

public:
    void setdata(int, int);
    void getdata();
    Num operator++();
};

void Num :: setdata(int r, int i)
{
    real = r;
    img = i;
}

Num Num :: operator++()
{
    Num t;
    t.real = ++real;
    t.img = ++img;
    return t;
}

void Num :: getdata()
    {
        cout << "Num is =" << real << "+" << img << "i" << endl;
    }

int main()
{
    Num a, b;
    a.setdata(2, 3);
    a.getdata();
    cout << "After increament " << endl;
    b = ++a;
    b.getdata();
}
