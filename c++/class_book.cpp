#include<iostream>
using namespace std ;
class book 
{
    private :
    int bookno,n;
    string booktitle ;
    float price,totalcost ;
    
    float total_cost(int num)
    {
        return price * num ;
    }
      
    public :
    void input()
    {
        cout<<"ENTER BOOK NO =";
        cin>>bookno;
        cout<<"ENTER BOOK TITLE =";
        cin>>booktitle;
        cout<<"ENTER PRICE =";
        cin>>price;
    }
    void purchase()
    {
        cout<<"ENTER THE NUMBER OF COPIES =";
        cin>>n;
        totalcost = total_cost(n);
    }
    void displaydata()
    {
        cout<<"BOOK NO ="<<bookno<<endl;
        cout<<"BOOK TITLE ="<<booktitle<<endl;
        cout<<"PRISE ="<<price<<endl;
        cout<<"NUMBER OF COPIES"<<n<<endl;
        cout<<"TOTAL COST ="<<totalcost<<endl;
    }
};
int main ()
{
    book a;
    a.input();
    a.purchase();
    a.displaydata();
}