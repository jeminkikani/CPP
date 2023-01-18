#include<iostream>
using namespace std ;
class report
{
    private:
    int admno,marks[50],average,i;
    string name ;

   
    float getavg()
    {
        for(i=0;i<5;i++)
        {
            return marks[i]/5 ;
        }
    }

    public :
    void readinfo()
    {
        cout<<"ENTER VALUE OF ADMIN NO =";
        cin>>admno;
        cout<<"ENTER NAME =";
        cin>>name;
        cout<<"ENTER MARKS =";
         for(i=0;i<5;i++)
        {
            cout<<"ENTER ARRAY A[i"<<i<<"]" ;
            cin>>marks[i] ;
        }
        average = getavg();
    }
    void displaydata()
    {
        cout<<"ADMIN NO = "<<admno<<endl;
        cout<<"NAME = "<<name<<endl;
        for(i=0;i<5;i++)
        {
            cout<<"ARRAY A["<<i<<"]= "<<marks[i]<<endl;
        }
        cout<<" AVERAGE = "<<average<<endl;
    }

};
int main()
{
    report a;
    a.readinfo();
    a.displaydata();
} 