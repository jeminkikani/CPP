#include<iostream>
using namespace std;
class num
{
	int a,b;
	friend int large num(num);
	public:
	void setdata(int x,int  y)
	{
		a=x;
		b=y;
	}
};	
int largenum(num j)
{
	if(t.a>t.b)
	{
		return a;
	}
	else 
	{
		return b;
	}
}
int main()
{
	num p;
	p.setdata(10,20);
	cout<<"large number is:-"<<large num(p);
}
/*output
	large number is:- 20
*/