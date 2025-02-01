#include<iostream>
using namespace std;


class demo
{

public:
int length;
int breadth;
void setlength(int l);
void setbreadth(int b);
int getarea();

};

void demo::setlength(int l)
{
    length=l;
    }
void demo::setbreadth(int b)
{
    breadth=b;
    }


int demo::getarea()
{
return length*breadth;
}

int main()
{
demo d;
d.setlength(7);
d.setbreadth(5);
int area=d.getarea();
cout<<"Area="<<area;
return 0;
}
