#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the values of a and b:";
    cin>>a>>b;

    try 
    {
        if (b!=0)
        {
            c=a/b;
            cout<<"Division="<<c; 
        }

        else
        {
            throw(b);
        }
    }

    catch(int b)
    {
        cout<<"Division with b is not possible";
    }

    return 0;
}
