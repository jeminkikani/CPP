#include<iostream>
using namespace std;
class student
{
    public:
    int adno,eng,maths,sci,total;
    string sname;

    student()
    {
        cout<<"Enter Admin no: ";
        cin>>adno;
        cout<<"Enter Student name: ";
        cin>>sname;
        cout<<"Enter maths marks: ";
        cin>>maths;
        cout<<"Enter science marks: ";
        cin>>sci;
        cout<<"Enter english marks: ";
        cin>>eng;
    }

    void Showdata()
    {
        
            total = eng + maths + sci;

        cout<<"Admin no: "<<adno<<endl;
        cout<<"Student name: "<<sname<<endl;
        cout<<"maths marks: "<<maths<<endl;
        cout<<"science marks: "<<sci<<endl;
        cout<<"english marks: "<<eng<<endl;
        cout<<"Total marks: "<<total<<endl;
    }

};

int main()
{
    student a;
    a.Showdata();
}