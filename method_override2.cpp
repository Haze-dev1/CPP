#include <iostream>
using namespace std;
 
class Parent {
    int a;
    int b;
public:
    void show(int a,int b)
    {

        this->a=a;
        this->b=b;

        cout << "Sum=" << this->a + this->b;
    }
};
 
class Child : public Parent
public:
int c,d;
    void show()
    {
        c=30,d=40;
        cout << "Sum=" <<c+d;

    }
};
 
int main()
{
    Child Child_Derived;
    Child_Derived.show();
    return 0;
}