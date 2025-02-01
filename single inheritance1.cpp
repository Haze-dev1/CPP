
#include<iostream>
using namespace std;

class A{
public:
string name;
string address;
int salary;
int da;
int petrol;
int mobile;
int gs;

void getdata(string n,string a, int s)
{
name=n;
address=a;
salary=s;
cout<<"peon:"<<endl;
cout<<"name="<<name<<endl;
cout<<"Address="<<address<<endl;
cout<<"salary="<<salary<<endl;

cout<<"\n";
}

};

class B:public A{
public:

void showdata(string n1,string a1, int sal, int pa, int ma)
{
name=n1;
address=a1;
salary=sal;
petrol=pa;
mobile=ma;
cout<<"Manager"<<endl;
cout<<"name="<<name<<endl;
cout<<"address="<<address<<endl;
cout<<"salary="<<salary<<endl;
da=salary/10;
cout<<"Daily allowance="<<da<<endl;
gs=salary+petrol+mobile;
cout<<"Total salary="<<gs<<endl;

}

};


int main()
{
B obj;
obj.getdata("Devansh","Pune",5000);

B obj1;
obj1.showdata("Dev","nagpur",10000,1000,500);

return 0;
}
