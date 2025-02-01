#include<iostream>
using namespace std;
class A
{

    int intmarks;
    int extmarks;

    public:
    
    A()
    {
        intmarks=0;
        extmarks=0;
    }
    A(int im,int em)
    {
        intmarks=im;
        extmarks=em;
    }

    void display()
    {
        cout<<intmarks<<endl<<extmarks;
    }

    A operator+(A m)
    {
        A obj;
        obj.intmarks=intmarks+m.intmarks;
        obj.extmarks=extmarks+m.extmarks;
        return obj;
    }
};

int main()
{
    A m1(10,20),m2(30, 40);
    A m3=m1+m2;
    m3.display();
    return 0;
}