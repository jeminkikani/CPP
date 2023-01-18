#include<iostream>
using namespace std;
class Bank
{
    int amount=100;
    public:
    void deposite(int n)
    {
        amount = amount + n;
    }
    int withdraw(int n)
    {
        if(n <= amount)
        {
            amount = amount - n;- 
        }
        else
        {
            cout<<"your balance is low ...";
        }
    }
    void show_balance()
    {
        cout<<"FINAL BALANCE IS ="<<amount;
    }
};
int main()
{
        Bank b;
        int ch, amount;
        int choice;
        while (ch != 0)
        {
                cout << "\n1 : Deposite  " << endl;
                cout << "2 : Withdraw  " << endl;
                cout << "3 : Show Balance   " << endl;
                cout << "4 : Exit  " << endl;
                cout << "Enter Your choice : ";
                cin >> ch;
                switch (ch)
                {

                case 1:
                        cout << "Enter deposit : ";
                        cin >> amount;
                        b.deposite(amount);
                        break;
                case 2:
                        cout << "Enter Withdraw : ";
                        cin >> amount;
                        b.withdraw(amount);
                        break;
                case 3:
                        b.show_balance();
                        break;
                case 4:
                        cout << " Thanks visit again..." << endl;
                        return 0;
                        break;

                default:
                        cout << "Invalid input " << endl;
                }
        }
        return 0;
}
