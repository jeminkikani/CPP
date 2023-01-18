#include<iostream>
using namespace std;
class flight 
{
    private:
    int flightno ;
    string  destination ;
    float distance,fuel ;

    float calfuel()
    {
        if(distance<=1000)
        {
            fuel = 500 ;
        }
        else if(distance>1000 && distance <= 2000)
        {
            fuel = 1100 ;
        }
        else
        {
            fuel = 2200 ;
        }
        return fuel ;
    }

    public:
    void feedinfo()
    {
        cout<<"ENTER FLIGHT NO. ";
        cin>>flightno;
        cout<<"ENTER DESTINATION";
        cin>>destination;
        cout<<"ENTER DISTANCE ";
        cin>>distance;
        
        fuel = calfuel();
    }

    void showinfo()
    {
        cout<<"FLIGHT NO ="<<flightno<<endl;
        cout<<"DESTINATION = "<<destination<<endl;
        cout<<"DISTANCE = "<<distance<<endl;
        cout<<"USED FUEL ="<<fuel<<endl;
    }
};

int main()
{
    flight a;
    a.feedinfo();
    a.showinfo();
}
