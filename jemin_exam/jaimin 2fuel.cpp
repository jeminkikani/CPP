#include<iostream>
using namespace std;
class air
{
	Private:
	int  flight number; 
	char destination;
	float distance,fuel;
	float calfuel()
	{
		if(distance<=1000)
		{
			return 500;
		}
		else if(distance<=1000 || distance<=2000)
		{
			return 1100;
		}
		else
		{
			return 2200;
		}
	}
	public:
	void feedinfo()
	{
		cout<<"\tenter your flight number :-"
		cin>>filght number;
		cout<<"\tenter your destination :-"
		cin>>destination;
		cout<<"\tenter  distance  :- ";
		cin>> distance ;
		fuel=calfuel();
	}
	void Showinfo()
	{
		cout<<"\tyour flight number :-"<<flight number<<endl;
		cout<<"\tyour destination :-"<<destination<<endl;
		cout<<"\tyour total distance :-" <<distance<<endl;
		cout<<"\tyour total fuel :-" <<fuel<<endl;
	}
};
int main()
{
	air a;
	a.feedinfo();
	a.Showinfo();
}
/*output
	enter your admin no :-101
	enter your name :- j
	enter  distance  :- 1000
	
	your flight number :- 101
	your destination :- j
	your total distance :- 1000
	your total fuel :- 500
*/
	
