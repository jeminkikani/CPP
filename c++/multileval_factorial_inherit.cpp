#include <iostream>
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
class fact : public factorial
{
    public:
    int fac=1;
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
class get : public fact
{
    public:
       void getdata()
        {
            cout<<"number is :-"<<fac<<endl;
        }
};
int main()
{  
    get a;
    a.setdata();
    a.cal();
    a.getdata();
}