#include<iostream>
using namespace std ;
class test
{
    private :
    int testcode,nocandidate,centerreqd ;
    string description ;

    float calcntr()
    {
        return (nocandidate/100+1);
    }

    public :
    void schedule()
    {
        cout<<"ENTER TEST CODE = ";
        cin>>testcode;
        cout<<"ENTER description = ";
        cin>>description;
        cout<<"ENTER NO. OF CANDIDATE = ";
        cin>>nocandidate;
        centerreqd = calcntr();
    }
    void disptest()
    {
        cout<<"TEST CODE="<<testcode<<endl;
        cout<<"DESCRIPTION="<<description<<endl;
        cout<<"NO. OF CANDIDATE= "<<nocandidate<<endl;
        cout<<"REQ. CENTER ="<<centerreqd<<endl;
    }
};
int main()
{
    test a;
    a.schedule();
    a.disptest();
}
