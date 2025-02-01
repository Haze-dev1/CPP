#include<iostream>
using namespace std;

class A
{
    string name;
    public:
    A(string n)
    {
        name=n;
    }

    A()
    {
        name="unknown";
    }

    void printdata()
    {
        cout<<"Name="<<name<<endl;
    }
};