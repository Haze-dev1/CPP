#include<iostream>
using namespace std;

void num()
{
    int a,b,c;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;


    if(a>b && a>c)
    {
        cout<<"First number was the greatest";
    }

    else if(b>a && b>c)
    {
        cout<<"Second number was the greatest";
    }

    else
    {
        cout<<"Third number was the greatest";
    }

}



int main()
{
    num();

    return 0;

}

