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


cout<<"Address of a is :"<<&a<<"\n";
cout<<"Address of b is :"<<&b<<"\n";


c=*p+*q;
cout<<"Sum of a and b is "<<c;


return 0;
}


