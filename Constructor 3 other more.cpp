#include<iostream>
using namespace std;
class demo
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



};
int main()
{
  int l,b;
  cout<<"Enter length and breadth: ";
  cin>>l>>b;

 demo d;
 cout<<"Area="<<d.getarea(l,b);

 return 0;
}


