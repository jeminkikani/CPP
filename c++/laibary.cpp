#include <iostream>
using namespace std;
class Food
{
    public:
    float qty, total, a = 0, b = 0, c = 0, d = 0, e = 0;
    static int count;
    void maths()
    {
        cout << "\n\t\t\t\t\t\tQty for the maths:";
        cin >> qty;
        a = qty * 80.00;
        cout << "\t\t\t\t\t\ttotal:" << a;
        total = total + a;
        count++;
    }
    void english()
    {
        cout << "\n\t\t\t\t\t\tQty for the english:";
        cin >> qty;
        b = qty * 70.00;
        cout << "\t\t\t\t\t\ttotal:" << b;
        total = total + b;
        count++;
    }
    void gujrati()
    {
        cout << "\n\t\t\t\t\t\tQty for the gujrati:";
        cin >> qty;
        c = qty * 50.00;
        cout << "\t\t\t\t\t\ttotal:" << c;
        total = total + c;
        count++;
    }
    void hindi()
    {
        cout << "\n\t\t\t\t\t\tQty for the hindi:";
        cin >> qty;
        d = qty * 40.00;
        cout << "\t\t\t\t\t\ttotal:" << d;
        total = total + d;
        count++;
    }
    void science()
    {
        cout << "\n\t\t\t\t\t\tQty for the science:";
        cin >> qty;
        e = qty * 70.00;

        cout << "\t\t\t\t\t\ttotal:" << e;
        total = total + e;
        count++;
    }
    void totall()
    {
        cout << "\n\t\t\t\t\t\tQty of all total:" << total;
    }
    void exit()
    {
        cout << "\n\t\t\t\t\t\tQty of all total:" << total;
        cout << "\n\t\t\t\t\t\ttotal food odear:" << Food::count;
        cout << "\n\t\t\t\t\t\t---------------------Exit---------------------";
    }
};
int Food::count;
int main()
{

    int ch;
    Food j;
//lable:
    cout << "\n\t\t\t\t\t\t-------------------------------------------";
    cout << "\n\t\t\t\t\t\t----------------BOOK_STORE--------------";
    cout << "\n\t\t\t\t\t\t-------------------------------------------";
    cout << "\n\t\t\t\t\t\t     1.maths                   80.00     ";
    cout << "\n\t\t\t\t\t\t     2.english                 70.00     ";
    cout << "\n\t\t\t\t\t\t     3.gujrati                 50.00     ";
    cout << "\n\t\t\t\t\t\t     4.hindi                   40.00      ";
    cout << "\n\t\t\t\t\t\t     5.science                 70.00      ";
    cout << "\n\t\t\t\t\t\t     6.total                              ";
    cout << "\n\t\t\t\t\t\t     0.Exit                               ";
    cout << "\n\t\t\t\t\t\t-------------------------------------------";
    while (ch > 0)
    {
        cout << "\n\t\t\t\t\t\tENTER THE CHOISE:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            j.maths();
            break;
        case 2:
            j.english();
            break;
        case 3:
            j.gujrati();
            break;
        case 4:
            j.hindi();
            break;
        case 5:
            j.science();
            break;
        case 6:
            j.totall();
            break;
        case 0:
            j.exit();
            break;
        default:
            cout << "wrong choice...";
            break;
        }
    }
    //goto lable;
}

