#include<iostream>
using namespace std;
template<class x>
    void display(x x1)
    {
        cout<<"class x templet\t\t"<<x1<<endl;
    }
template<class y, class z>
    void display(y y1,z y2)
    {
        cout<<"class y templet\t\t"<<y1<<y2<<endl;
    } 
int main()
{
    display(102);
    display(102,105);
    display('j');
    display(102,105);
    display(102,'j');
    display('j');
    return 0;
}