#include<iostream>
using namespace std;

class area{

private:

    int a,b,c;

  public: void print(){

    cout<<"Enter the length and breath of the rectangle: ";
    cin>>a>>b;

    c=a*b;
    cout<<"The area of the rectangle is "<<c;

   }

};

int main()
{
    area obj;

 obj.print();

    return 0;
}
