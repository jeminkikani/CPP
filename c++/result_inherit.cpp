 #include <iostream>
using namespace std;
class result
{
public:
    int m, s, e,total,per
    ;
    void setdata()
    {
        cout << "\n\t\t\tENTER MATHS MARKS =";
        cin >> m;
        cout << "\t\t\tENTER SCINCE MARKS =";
        cin >> s;
        cout << "\t\t\tENTER ENGLISH MARKS =";
        cin>>e;
    }
};
class get : public result 
{
    public:
    void calculation()
    {
       total = m + s + e ;
        per = total / 3;
    }
    void getdata()
    {
        cout << "\t\t\t:::::::::::TOTAL:::::::::::::::: " << endl << "\t\t\t\t\t" << total << endl;
        cout << "\t\t\t::::::::::PERCENTAGE::::::::::::: " << endl <<"\t\t\t\t\t" << per << endl;
    }
};
int main()
{
    get a;
    a.setdata();
    a.calculation();
    a.getdata();
}