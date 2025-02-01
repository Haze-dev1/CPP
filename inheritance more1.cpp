#include<iostream>
using namespace std;

class company
{
protected:
    string name[2];
    int age[2];

    void setdata(string n[2], int a)
    {/*
        name[0]=n[0];
        name[1]=n[1];
        age[0]=a[0];
        age[1]=a[1];*/
    }
};



class management:public company
{
    public:
   void getdata()
   {
        cout<<"Manager"<<endl;
        cout<<"name=devansh"<<endl;
        cout<<"Age=18"<<endl;
        cout<<"salary=Rs 10000"<<endl;
        cout<<"Tds=Rs 1000"<<endl;
        cout<<"Petrol=Rs 1000"<<endl;
        cout<<"Mobile expenses=Rs 500"<<endl;
        cout<<"So total salary= 10000+1000+1000+500= Rs 12500"<<endl;

        cout<<"\n";

        cout<<"Worker"<<endl;
        cout<<"Name=dev"<<endl;
        cout<<"Age=1"<<endl;
        cout<<"Salary=Rs 5000";
   }
};

int main()
{
    management m;

    m.getdata();
    return 0;
}
