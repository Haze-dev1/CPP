#include<iostream>
using namespace std;

int add(int n)
{
 int sum=0,b,average;



    while(n>0)
    {
        b=n%10;
        sum=sum+b;
        n=n/10;
    }
    cout<<"The sum of individual numbers is "<<sum;
cout<<"\n";

    return sum;
}


void get(int e,int t)
{

int count=1,average;
while(e>0)
    {
        e=e/10;
        if(e>0)
        {

        count=count+1;

        }

        else
        {
            continue;
        }
            }

             cout<<"count is  "<<count;


average=t/count;

cout<<"The average is "<<average;

}






int main()
{
    int a;
     cout<<"Enter any number: ";
    cin>>a;


int s;
s=add(a);

gets(a,s);


    return 0;

}
