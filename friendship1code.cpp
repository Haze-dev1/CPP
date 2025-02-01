#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    void show();

    frined int sum(A);
};

void A::show()
{
    cout<<"Enter any values of a and b: ";
    cin>>a>>b;
}

int sum(A aa)
{
    return aa.a+aa.b;
}

int main()
{
    A aa;
    aa.show();
    cout<<"Sum="<<sum(aa);
    return 0;
}
