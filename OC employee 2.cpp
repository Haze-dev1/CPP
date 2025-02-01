// class is a collection of data members and member functions.

#include<iostream>
using namespace std;

class employee1{

public:

int id=1;
string name="Santosh";

float salary=5000;


void show()
{
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<salary<<endl;
}


};

class employee2{

public:

int id=2;
string name="Chetan";

float salary=6000;



void show()
{
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<salary<<endl;
}


};



int main()
{
    employee1 obj1;

    obj1.show();

    employee2 obj2;
    obj2.show();

    return 0;

}

