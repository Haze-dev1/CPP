#include<iostream>
using namespace std;
int main()
{
int a,b,c;

cout<<"Enter the value of a,b,c :";
cin>>a>>b>>c;

if(a>b && a>c)
{
    cout<<"a is greater than b and c";
}

else if(b>a && b>c)
{
    cout<<"b is greater than a and c";
}

else
{
cout<<"c is greater than a and c";
}

return 0;

}
