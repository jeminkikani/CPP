#include <iostream>
using namespace std;
class Food
{
    public:
    char name[100];
    char mob[20];
    float qty, total=0, a = 0, b = 0, c = 0, d = 0, e = 0;
    static int count;
    Food()
    {
    cout << "\n\t\t\t\t\t\t-------------------------------------------";
    cout << "\n\t\t\t\t\t\t----------------RESTAURANT-----------------";
    cout << "\n\t\t\t\t\t\t-------------------------------------------";
    cout << "\n\t\t\t\t\t\t     1.paneer                   200.00     ";
    cout << "\n\t\t\t\t\t\t     2.kajukari                 170.00     ";
    cout << "\n\t\t\t\t\t\t     3.chapati                  20 .00     ";
    cout << "\n\t\t\t\t\t\t     4.nan                      30.00      ";
    cout << "\n\t\t\t\t\t\t     5.butter_milk              20.00      ";
    cout << "\n\t\t\t\t\t\t     6.total                               ";
    cout << "\n\t\t\t\t\t\t     0.Exit                                ";
    cout << "\n\t\t\t\t\t\t-------------------------------------------";
    cout << "\n\t\t\t\t\t\t     ENTER YOUR NAME :";
    cin>>name;
    cout << "\n\t\t\t\t\t\t     ENTER YOUR MOBILE NO :";
    cin>>mob;
    }

    void paneer(int p)
    {
        
        a = p * 200.00;
        // cout << "\t\t\t\t\t\ttotal:" << a;
        total = total + a;
        count++;
    }
    void kajukari(int p)
    {
        
        b = p * 170.00;
        // cout << "\t\t\t\t\t\ttotal:" << b;
        total = total + b;
        count++; 
    }
    void chapati(int p)
    {
   
        c = p * 20.00;
        // cout << "\t\t\t\t\t\ttotal:" << c;
        total = total + c;
        count++;
    }
    void nan(int p)
    {
        
        d = p * 30.00;
        // cout << "\t\t\t\t\t\ttotal:" << d;
        total = total + d;
        count++;
    }
    void butter_milk(int p)
    {
        
        e = p * 20.00;
        // cout << "\t\t\t\t\t\ttotal:" << e;
        total = total + e;
        count++;
    }
    void exit()
    {
        cout << "\n\t\t\t\t\t\tNAME IS  :\t\t\t"<<name;
        cout << "\n\t\t\t\t\t\tMOBILE NO IS  :\t\t\t"<<mob;
        cout << "\n\t\t\t\t\t\tQty of all total:\t\t\t" << total;
        cout << "\n\t\t\t\t\t\ttotal food odear:\t\t\t" << Food::count;
    }
    void final()
    {
        int gst,netbillamt,dis,fin;
        gst = total * 0.5;
        dis = total * 0.02;
        fin = total - dis;
        netbillamt =total + gst;
        cout << "\n\t\t\t\t\t\tdis amount       :\t\t\t" << dis;
        cout << "\n\t\t\t\t\t\tfinal            :\t\t\t" << fin;
        cout << "\n\t\t\t\t\t\tgst bill with    :\t\t\t" << gst;
        cout << "\n\t\t\t\t\t\tgst bill include :\t\t\t" << netbillamt;
        cout << "\n\t\t\t\t\t\t-----------THANK_YOU_VISIT_AGAIN-----------";
    }
};
int Food::count;
int main()
{
    int ch,a;
    Food j;
    while (ch > 0)
    {
        cout << "\n\t\t\t\t\t\tENTER THE CHOISE:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\t\t\t\t\t\tQty for the paneer_tikka:";
            cin >> a;
            j.paneer(a);
            break;
        case 2:
            cout << "\n\t\t\t\t\t\tQty for the kajukari:";
            cin >> a;
            j.kajukari(a);
            break;
        case 3:
            cout << "\n\t\t\t\t\t\tQty for the chapati:";
            cin >> a;
            j.chapati(a);
            break;
        case 4:
            cout << "\n\t\t\t\t\t\tQty for the nan:";
            cin >> a;
            j.nan(a);
            break;
        case 5:
            cout << "\n\t\t\t\t\t\tQty for the butter_milk:";
            cin >> a;
            j.butter_milk(a);
            break;
        
        case 0:
            j.exit();
            j.final();
            break;
        default:
            cout << "wrong choice...";
            break;
        }
    }
}