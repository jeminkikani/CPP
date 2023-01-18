#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream("abc.txt");
    if (filestream.is_open())
    {
        filestream<<"wel-come in jemin life....";
        filestream<<"\nwe start a new life-style....";
        // filestream<<"wel-come in jemin life....";
        // filestream<<"wel-come in jemin life....";
        // filestream<<"wel-come in jemin life....";
        filestream.close();
    }
    else
        cout<<"file opening is fail....";
        return 0;
}
