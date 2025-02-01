#include<iostream>
using namespace std;
void factorial()
{

int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num<0)
    {
        cout<<"Factorial of negative number is not possible.";
    }



    else if(num==0)
    {
        cout<<"Factorial of zero is 1.";
    }


    else{

    int fact=1;


for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is equal to "<<fact;


}




}


int main()
{


    factorial();

    return 0;
}
