#include<iostream>
using namespace std;

void name()
{

    char a[3][10];


   cout<<"Enter your first name: ";
   cin>>a[0];

   cout<<"Enter your middle name: ";
   cin>>a[1];

   cout<<"Enter your last name:";
   cin>>a[2];




   cout<<"So your full name is: "<<a[0]<<"\t"<< a[1]<<"\t"<<a[2];

}

int main()
{
    name();

    return 0;
}
