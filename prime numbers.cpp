#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;

    cout<<"Enter any numbers :";
    cin>>a;
b=a%2;
c=a%3;
d=a%5;
e=a%7;
f=a%11;

if(a==2 || a==3 || a==5 || a==7 || a==11)
{
    cout<<"Prime number";
}

   else if(b==0 || c==0 || d==0 || e==0 || f==0)
    {
        cout<<"not a prime number";
    }
    else {
          cout<<"prime number";
}
    return 0;


}
