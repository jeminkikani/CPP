#include<iostream>
using namespace std;
class factorial
{
    public:
    int number;
    void setdata()
    {
        cout<<"enter number";
        cin>>number;
    }
};
class get
{
    public:
    int fac=1;
       void getdata()
        {
            cout<<"number is :-"<<fac<<endl;
        }
};
class fact : public factorial, public get
{
    public:
    void cal()
    {
        if(number<0)
        {
            cout<<"Eroor !!!! negative number";
        }
        else
        {
            for (int i = 1; i <= number; ++i)
            {
                fac = fac * i;
            }
            
        }
    }
};
int main()
{  
    fact a;
    a.setdata();
    a.cal();
    a.getdata();
}