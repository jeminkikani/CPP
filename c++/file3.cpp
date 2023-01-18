#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[50];
    ofstream os;
    os.open("file3.txt");
    cout<<"Writing to a text file ="<<endl;
    cout<<"Enter your name="<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Enter mo. numberm ="<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("file3.txt");
    cout<<"Reading from a text file"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }    
    is.close();
    return 0;
}0 