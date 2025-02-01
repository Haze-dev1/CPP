#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;

cout<<"Enter two numbers: ";
cin>>a>>b;
c=a%2;
d=b%2;
if(c==0)
{
    cout<<"a is a multiple of 2";
}

else if(d==0)
{
    cout<<"b is multiple of two";
}
else
{
    cout<<"none";
    continue;
}
return 0;
}
