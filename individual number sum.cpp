#include<iostream>
using namespace std;
void number()
{
         int a[5];
    cout<<"Enter any number: ";
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];


int sum;

        sum=a[0]+a[1]+a[2]+a[3]+a[4];

        sum=sum/5;

        cout<<"average of individual numbers is "<<sum;
}

int main()
{

number();
    return 0;

/*12345
1 2 3 4 5*/


}

