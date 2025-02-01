#include<iostream>
using namespace std;

int main()
{
int a,b,c;
int *p,*q;

cout<<"Enter two numbers: ";
cin>>a>>b;

p=&a;
q=&b;


cout<<"a is"<<a<<"\nAddress of a is :"<<&a<<"\n";
cout<<"b is"<<b<<"\nAddress of b is :"<<&b<<"\n";

    a=a+b;
    b=a-b;
    a=a-b;
cout<<"a is"<<a<<"\n";
cout<<"b is"<<b;


return 0;
}


