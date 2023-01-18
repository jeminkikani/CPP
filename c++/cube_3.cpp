#include<iostream> 
using namespace std;
class base
{
    public:                                                                                                                                                                                                                                                   
    int i,cube , count;
    void setdata()
    {
        cout<<"enter cube number";
        cin>>count;
    }
};
class cub : public base
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










/*#include<iostream>
using namespace std ;
class cube
{
    public :
    int i, num, cub;
    void setdata()
    {
        cout << "Input the number of terms : ";
        cin >> num;
    }

};
class calc : public cube
{
    public :
    void calculate()
    {
        
    for (i = 1; i <= num; i++) 
        {
            cub = i * i * i;
            cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
        }

    }
};
int main()
{
    calc a;
    a.setdata();
    a.calculate();
}*/