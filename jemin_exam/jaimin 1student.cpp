#include<iostream>
using namespace std;
class student
{
	Private:
	int admno; 
	char sname[20];
	float eng, math, science,total;
	float ctotal()
	{
		return eng + math + science;
	}
	public:
	void takedata()
	{
		cout<<"\tenter your admin no :-"
		cin>>admno;
		cout<<"\tenter your name :-"
		cin>>sname;
		cout<<"\tenter english marks :- ";
		cin>>eng;
		cout<<"\tenter maths marks :- ";
		cin>>math;
		cout<<"\tenter science marks :- ";
		cin>>science;
		total=ctotal();
	}
	void Showdata()
	{
		cout<<"\tyour admin no:-"<<admno<<endl;
		cout<<"\tyour name :-"<<sname<<endl;
		cout<<"\ttotal marks :-"<<total<<endl;
	}
};
int main()
{
	student a;
	a.takedata();
	a.Showdata();
}
/*output
	enter your admin no :-101
	enter your name :- jemin
	enter english marks :- 90
	enter maths marks :- 80
	enter science marks :- 70
	
	your admin no :- 101
	your name :- jemin
	total marks :- 240
*/
	
