#include<iostream>
using namespace std;

void num()
{
    int a,sum=0,b;

    cout<<"Enter any number: ";
    cin>>a;

    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }

    cout<<"The sum of individual numbers is "<<sum;
}

int main()
{
    num();

    return 0;

}
