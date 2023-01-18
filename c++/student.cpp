#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    string sname;
    float eng,maths,sci,total;
    float ctotal()
    {
        return maths+sci+eng;
    }    
public:
    void Takedata()
    {
        cout<<"Enter Admin no: ";
        cin>>admno;
        cout<<"Enter Student name: ";
        cin>>sname;
        cout<<"Enter maths marks: ";
        cin>>maths;
        cout<<"Enter science marks: ";
        cin>>sci;
        cout<<"Enter english marks: ";
        cin>>eng;
        total = ctotal();
    }
    void Showdata()
    {
        cout<<"Admin no: "<<admno<<endl;
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
    a.Takedata();
    a.Showdata();
}