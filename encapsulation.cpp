#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;
public:

    void getdata(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int printarea()
    {
        return length*breadth;
    }


};

int main()
{
    int a,b;
    cout<<"Enter the length and the breadth of the rectangle: ";
    cin>>a>>b;
    rectangle obj;
    obj.getdata(a,b);

    cout << "Area = " << obj.printarea();

    return 0;

}
