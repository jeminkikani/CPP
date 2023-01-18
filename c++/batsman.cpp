#include<iostream>
using namespace std ;
class batsman
{
  private:
  int bcode,innings,notout,runs,batavg ;
  string bname;
  
  float calcavg()
  {
    return runs
    
    (innings-notout);
  }

  public :
    void readdata ()
  {
    cout<<"ENTER VALUE OF BETTING CODE = ";
    cin>>bcode;
    cout<<"ENTER NAME = ";
    cin>>bname;
    cout<<"ENTER INNINGS = ";
    cin>>innings;
    cout<<"ENTER NOT OUT VALUE = ";
    cin>>notout;
    cout<<"ENTER RUN = ";
    cin>>runs;
    batavg = calcavg();
  }
    void displaydata()
  {
    cout<<"BETTING CODE"<<bcode<<endl;
    cout<<"NAME ="<<bname<<endl;
    cout<<"INNINGS ="<<innings<<endl;
    cout<<"NOT OUT ="<<notout<<endl;
    cout<<"RUN ="<<runs<<endl;
    cout<<"AVERAGE ="<<batavg<<endl;
  }
};
int main()
{
    batsman a;
    a.readdata();
    a.displaydata();
}