#include<iostream>
using namespace std;

void add (int, int);

int main()
{
    add(99,1);
    add(96,4);
    add(54,46);

    return 0;
}

void add(int a, int b)
{
    cout<<"So the sum is "<<a+b;
    cout<<"\n";
}
