#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    void show();

    friend int maths(A);

};

void A::show();
{
    cout<<"Enter any values of a and b: "
}