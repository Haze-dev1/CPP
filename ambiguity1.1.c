#include<iostream>
using namespace std;

class a
{
    public:
    void s()
    {
        cout<<"Call class a"<<endl;
    }
};

class b
{
    public:
    void s()
    {
        cout<<"call class b"<<endl;
    }
};

class c : public a,public b
{
    public:
    void s()
    {
        cout<<"call class c"<<endl;
    }
};

int main()
{
    c obj;
    obj.s();
    obj.a::s();
    obj.b::s();

    return 0;
}
