// class is a collection of data members and member functions.

#include<iostream>
using namespace std;

class employee1{

public:

int id=1;
string name="devansh";

float salary=5000;


void show()
{
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<salary<<endl;
}


};

int main()
{
    employee1 obj;

    obj.show();

    return 0;

}
