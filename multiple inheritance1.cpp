#include<iostream>
using namespace std;

class first
{
public:
    int a;
};

class second: public first
{
    void see()
    {cout<<"Enter first value:";
    cin>>"a";}
};

class third
{
    int b;

    void show(){
    cout<<"Enter second value:";
    cin>>"b";}

};

class forth: public second : public first
{
    void fin()
    {int c;

    c=(a+b)/2

    cout<<"the average of "<<a<<"and "<<b<<" is "<<c;
    }
};

int main()
{
    forth.d;
    d.see();
    d.show();
    d.fin();

    return 0;
}

