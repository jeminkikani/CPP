#include<iostream> 
using namespace std;
class base
{
    public:
    int i,cube , count;
};
class set : public base
{
    public:
    void setdata()
    {
        cout<<"enter cube number";
        cin>>count;
    }
};
class cub : public set
{
    public:
    void calculation()
    {
        for (int i = 1; i <= count; i++)
        {
            cube = i * i * i;
            cout << "Number is : " << i << " and the cube of " << i << " is: " << cube << endl;
        }
    }
};
int main()
{
    cub a;
    a.setdata();
    a.calculation();
}

