#include<iostream>
using namespace std;
class company
{
protected:
    string name;
public:
    void setdata(string n)
    {
        name=n;
    }

};

class management:public company
{
    public:
   void getdata()
   {
    int a;
    cout<<"Press 1 for details of manager and 2 for details of pune: ";
    cin>>a;
    if(a==1)
    {
        cout<<"Name="<<name<<endl;
        cout<<"salary=Rs 10000"<<endl;
        cout<<"Tds=Rs 1000"<<endl;
        cout<<"Petrol=Rs 1000"<<endl;
        cout<<"Mobile expenses=Rs 500"<<endl;
        cout<<"So total salary= 10000+1000+1000+500= Rs 12500";
    }

    else if(a==2)
    {
        cout<<"Name="<<name<<endl;
        cout<<"Salary=Rs 5000";
    }

    else
    {
        cout<<"Invalid option";
    }
   }
};

int main()
{

string d;
cout<<"Enter the name of Person you are searching: ";
cin>>d;
management m;
m.setdata(d);
m.getdata();

return 0;

}
