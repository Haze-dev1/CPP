#include <iostream>
using namespace std;

class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:

 	{

 	   x = 10;
 	}
};
class C
 {
 	public:
 	int y;

 	{
 	    y = 4;
        }
};
class D : public B, public C
{
 	public:
 	void sum()
 	{
 	    cout << "Sum= " << x + y;
 	}
};

int main()
{
         D obj1;
 	obj1.sum();
 	return 0;
}
