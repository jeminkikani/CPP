#include <iostream>
using namespace std;
class factorial
{
    public:
    int number,fac=1;
    void setdata()
    {
        cout<<"enter number";
        cin>>number;
    }
};
class fact : public factorial
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
        void getdata()
        {
            cout<<"number is :-"<<fac<<endl;
        }
};
int main()
{  
    fact a;
    a.setdata();
    a.cal();
    a.getdata();
}


























/*#include<iostream>
using namespace std;
//main class
class factorial
{
	public:
	unsigned long long fact=1;
	int num;
	void display();	
};
//child class
class child_factorial: public factorial
{
	public:
	int input();
	void fact_function();
	
};

int child_factorial::input()
{
	cout<<"Please enter a number: ";
	cin>>num;
}

void child_factorial::fact_function()
{
	for(int i=1;i<=num;i++)
{
fact=fact*i;
}
}

void factorial::display()
{
	cout<<"Factorial of entered number is: "<<fact;
}

int main()
{
	child_factorial object;
	
	
	object.input();
	object.fact_function();
	object.display();
}*/