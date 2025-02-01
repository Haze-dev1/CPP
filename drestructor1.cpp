#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;

    int getarea(int l,int b)
    {
        length=l;
        breadth=b;

        return length*breadth;
    }

    ~Rectangle
        {
            cout<<"drestructor method";
        }

};

int main()
{
    Rectangle rt;
    rt.serarea(10,5);
    cout<<"Area="<<rt.gerarea()<<endl
    return 0;
}


