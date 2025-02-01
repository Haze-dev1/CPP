#include<iostream>
using namespace std;

 void number(int num)
 {


     int b=num,sum=0;
     int r;
     while(num>0)
     {
         r=num%10;
         sum=sum*10+r;
         num=num/10;
     }

     if(sum==b)
     {
         cout<<"Palindrome number.";
     }

     else
        {
            cout<<"Not palindrome number.";
        }
 }



 int main()


 {

     int n;

     cout<<"Enter any number: ";
     cin>>n;
     number(n);

     return 0;

 }
