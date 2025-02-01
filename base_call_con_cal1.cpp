#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int x)

    {
        a=x;
    }

    void show()
    {
        cout<<a;
    }

};

class B
{
    int b;
    public:
    B(int y)

    {
        b=y;
    }
    void show2()
    {
        cout<<b;
    }
};

class C:public A,public B
{
    int c;
    public:
    C(int p,int q,int r):A(p),B(q)
    {
        c=r;
    }
    void display1()
    {
        cout<<c;
    }
    
};

int main()
{
    C obj (10,20,30);
    obj.show();
    obj.show2();
    obj.display1();
    

    return 0;
}