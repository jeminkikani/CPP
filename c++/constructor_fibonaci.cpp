#include<iostream>
using namespace std;
class fibonacci
{
    public:
    int n,j,k,n1,n2;
    
    fibonacci()
    {
       n1=-1;
       n2=1; 
    }
    void fibo(int n) 
    {
        cout<<"\n Resultant fibonacci series\n";
        for(int i=0; i<n; i++)
        {
            k=n1+n2; 
            cout<<k<<endl; 
            n1=n2;
            n2=k;
        }
    }
};

int main()
{
    fibonacci a;
    int n;
    cout<<"\n Enter the range :- ";
    cin>>n;
    a.fibo(n); 
}