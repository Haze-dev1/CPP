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


int main()
{
    A a("Devansh");
    a.printdata();
    A b;
    b.printdata();
    return 0;
}