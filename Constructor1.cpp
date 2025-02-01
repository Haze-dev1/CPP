#include<iostream>
using namespace std;

class Employee{

public:

    int id;
    string name;
    float salary;

    Employee(int i,string n, float s)
    {
        id=i;
        name=n;
        salary=s;
    }

    void display()
    {
        cout<<"Id is:"<<id<<endl;
        cout<<"Name is:"<<name<<endl;
        cout<<"Salary is:"<<salary<<endl;



    }

};


int main()
{
    int a;
    string b;
    float c;

    cout<<"Enter your Id:";
    cin>>a;


    cout<<"Enter your name:";
    cin>>b;

    cout<<"Enter your salary:";
    cin>>c;



Employee e1(a,b,c);
e1.display();

return 0;


}
