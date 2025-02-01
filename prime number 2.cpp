#include<iostream>
using namespace std;
void number()
{

int a,i;int count=0;
cout<<"Enter any number: ";
cin>>a;


for(int i=1;i<=a;i++)
    {

            {

            if(a%i==0)

            count=count+1;

            }


    }
if (count==2)
{
    cout<<"Prime number.";
}

else
{
cout<<"Not prime number.";
}




}



int main()
{
number();

return 0;
}
