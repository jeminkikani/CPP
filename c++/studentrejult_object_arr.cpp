#include <iostream>
using namespace std;
class result
{
public:
    int total, per, m, s, e, h, g;
    void setdata()
    {
        cout << "\n\t\t\tENTER MATHS MARKS =";
        cin >> m;
        cout << "\t\t\tENTER SCINCE MARKS =";
        cin >> s;
        cout << "\t\t\tENTER ENGLISH MARKS =";
        cin >> e;
        cout << "\t\t\tENTER HINDI MARKS =";
        cin >> h;        
        cout << "\t\t\tENTER GUJRATI MARKS =";
        cin >> g;
    }
    void calculate()
    {
        total = m + s + e + h + g;
        cout << "\t\t\t:::::::::::TOTAL:::::::::::::::: " << endl << "\t\t\t\t\t" << total << endl;
        per = total / 5;
        cout << "\t\t\t::::::::::PERCENTAGE::::::::::::: " << endl <<"\t\t\t\t\t" << per << endl;
        cout << "\t\t\t::::::::::GRADE::::::::::::: " << endl <<"\t\t\t\t\t" << endl;
        if (total>90)
        {
            cout<<"\t\t\tGRADE A";
        }
        else if (per>90 && per<80)
        {
            cout<<"\t\t\tGRADE B";
        }
        else if (per>80 && per<60)
        {
            cout<<"\t\t\tGRADE C";
        }
        else if (per>60 && per<50)
        {
            cout<<"\t\t\tGRADE D";
        }
        else if (per>50 && per<40)
        {
            cout<<"\t\t\tGRADE E";
        }
        else
        {
            cout<<"\t\t\tFAIL";
        }
    }
};
int main()
{
    result a[5], b;
    for (int i = 0; i < 3; i++)
    {
        cout<<"\t\t\t:::::::::Enter Student Detail is:::::::"<<endl<<i+1<<endl;
        a[i].setdata();
        cout<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"\t\t\t::::::::Student Detail is:::::::"<<endl<<i+1<<endl;
        a[i].calculate();
        cout<<endl;
    }
}
