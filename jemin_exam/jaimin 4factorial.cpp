#include<iostream>
using namespace std;
class fibonaci
{
	public:
	int i,n1,n2,k;
	void setdata()
	{
		n1=-1;
		n2=1;
	}
	void getdata(int n)
	{
		cout<<"your fibonaci series is\n"
		for(i=0;i<=n;i++)
		{
			k=n1+n2;
			cout<<k<<endl;
			n1=n2;
			n2=k;	
		}
	}	
};
int main()
{
	factorial a;
	int n;
	cout<<"enter your number:-";
	cin>>n;
	a.setdata();
	a.getdata(n);
}
/*output
	enter your number:- 2

	-1,1
*/