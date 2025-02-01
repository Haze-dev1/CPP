#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter four numbers: ";
    cin>>a>>b>>c>>d;

    if(a>b&&a>c&&a>d)
    {
    cout<<"a is the greatest number.";
    }

    else if(b>a&&b>c&&b>d)
    {
    cout<<"b is the greatest number.";
    }

     else if(c>a&&c>b&&c>d)
    {
    cout<<"c is the greatest number.";
    }

     else
    {
    cout<<"d is the greatest number.";
    }

    return 0;
}
