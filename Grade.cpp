#include<iostream>
using namespace std;
int main()
{
    char a;

    cout<<"Enter your Grade";
    cin>>a;

    if(a='A')
    {
        cout<<"Excellent";
    }

    else if(a='B')
    {
        cout<<"Outstanding";
    }

    else if(a='C')
    {
        cout<<"Good";
    }

    else if(a='D')
    {
        cout<<"Can do better";
    }

    else if(a='E')
    {
        cout<<"Just Passed";
    }

    else if(a='F')
    {
        cout<<"Failed";
    }

    else
    {
        cout<<"Invalid grade";
    }

    return 0;
}
