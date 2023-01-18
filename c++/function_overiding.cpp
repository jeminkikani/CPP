#include<iostream>
using namespace std;
class base 
{
    public:
    void display()
    {
        cout<<"base class called...";
    }
};
class derived : public base
{
    public:
    void display()
    {
        cout<<"derived class called...";
    }  
};
int main()
{
    derived a;
    a.display();
}
/*function overidig ni andar 2 function na name sarkha hoi 
  tyre run-time error aave object derived no banavo hoi to pn base class nu function call no tay
*/