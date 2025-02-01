#include<iostream>
using namespace std;

void number()
{
        int n,sum=0,a,r;

        cout<<"Enter any number: ";
        cin>>n;


        a=n;

        while(n>0)
        {
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }


if(sum==a)

{

cout<<"Armstrong number.";
}

else
{
cout<<"Not armstrong number";
}

}

int main()
{
    number();

    return 0;    }
