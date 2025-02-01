#include<iostream>
using namespace std;

class students
{
    string name;
    public:
    students(string n)
    {
        name=n;
    }

    students()
    {
        name="unknown";
    }

    void printdata()
    {
        cout<<"Name="<<name<<endl;
    
    }
};

int main()
{
    students a("Devansh");
    a.printdata();
    students b;
    b.printdata();
    return 0;
}



