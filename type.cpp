#include<iostream>
using namespace std;
int main()
{
    int a=21,b=5;
    float c;

    cout<<"Implicit typecasting: ";
    c=a/b;
    cout<<c<<endl;
    cout<<"Explicit typecasting: ";
    c=(float)a/b;
    cout<<c<<endl;
    return 0;
}

