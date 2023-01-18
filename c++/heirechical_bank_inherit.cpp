#include <iostream>
using namespace std;
class Bank
{
    public :
    char ac_type[20];
};
class saving : public Bank
{
    public:
    int bal = 1000;
    void sdeposite(int x)
    {
        bal = bal + x;
        cout << "Deposite Amount : " << x << endl;
    }
    void swithdraw(int y)
    {
        if (bal < y)
        {
            cout << "you have not sufficient amount:" << endl;
        }
        else
        {
            bal = bal - y;
            cout << "your withdraw Amount is:" << y << endl;
        }
    }
    void sshowbalance()
    {
        cout << "show balance " << bal << endl;
    }
};
class current : public Bank
{
    public:
    int balance = 10000;
    void cdeposite(int x)
    {
        balance = balance + x;
        cout << "Depoiste Balance : " << x << endl;
    }
    void cwithdraw(int y)
    {

        if (balance < y)
        {
            cout << "you have not  an amount:" << endl;
        }
        else
        {
            balance = balance - y;
            cout << "your withdraw balance is:" << y << endl;
        }
    }
    void cshowbalance()
    {
        cout << " balance : " << balance << endl;
    }
};
int main()
{
    saving s;
    current c;
    int ch, x;
    char a;
    lable:
    cout<<"Choice For Bank Account Type"<<endl<<"Write s for saving Account  & c for  curremnt Account "<<endl;
    cout << "Bank Account type: ";
    cin >> a;
    if (a == 's' )
    {
        while (ch != 4)
        {
            cout << "1. Diposite Amount " << endl;
            cout << "2. Withraw Amount " << endl;
            cout << "3. Show Balance " << endl;
            cout << "4. Exit " << endl;
            
            
            cin >> ch;

            switch (ch)
            {
            case 1:
                cout << " deposite:" << endl;
                cin >> x;
                s.sdeposite(x);
                break;
            case 2:
                cout << " withdraw:" << endl;
                cin >> x;
                s.swithdraw(x);
                break;
            case 3:
                s.sshowbalance();
                break;
            case 4:
                cout<<"THANK FOR VISIT"<<endl;
                return 0;
                break;
            default:
                cout << "invalid choice"<<endl;
                break;
            }
        }
    }
    else if (a == 'c')
    {
    while (ch != 4)
        {
            cout << "1. Diposite Amount " << endl;
            cout << "2. Withraw Amount " << endl;
            cout << "3. Show Balance " << endl;
            cout << "4. Exit " << endl;
            cout << "Enter your choice " << endl;
            cin >> ch;

            switch (ch)
            {
            case 1:
                cout << " deposite:" << endl;
                cin >> x;
                c.cdeposite(x);
                break;
            case 2:
                cout << " withdraw:" << endl;
                cin >> x;
                c.cwithdraw(x);
                break;
            case 3:
                c.cshowbalance();
                break;
            case 4:
                cout<<"THANK FOR VISIT"<<endl;
                return 0;
                break;
            default:
                cout << "invalid choice"<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"ENTER VALID ACCOUNT TYPE"<<endl;
        goto lable;
    }
}