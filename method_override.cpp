#include<iostream>
using namespace std;

class A
{
    int a,int b;
    public:
    void show(int a, int b)
    {
        this->a=a;
        this->b=b;

        cout<<"Sum="<<this->a+this->b;
    }
};

class B : public A
{
    int c,int d;
    public:
    void show()
    {
        20=c;
        30=d;

        product<<"Product="<<c*d;

    }
};

int main()
{
     B.obj;
     obj.show();
     return 0;
}