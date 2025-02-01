#include<iostream>
using namespace std;

int add(int d,int e,int f)
{

    int total=d+e+f;

    return total;
}

 void percentage(int tt)
{

    int per= tt*100/300;

    cout<<"Percentage= "<<per;


}


int main()
{
    int a,b,c;

    cout<<"Enter the marks in Maths, Chemistry and Physics :";
    cin>>a>>b>>c;

  int new_total;
  new_total=add(a,b,c);

  cout<<"sum of marks= "<<new_total;
  cout<<"\n";

  percentage(new_total);


  return 0;
}
