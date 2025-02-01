#include<iostream>
using namespace std;

class student
{
protected:
    string name;
public:
    void setdata(string n)
    {
        name=n;
    }
};

class undergraduate:public student{
public:
    void getdata()
    {
        cout<<"name="<<name;
    }
};
int main()
{
    undergraduate u;
    u.setdata("devansh");
    u.getdata();
    return 0;
}

