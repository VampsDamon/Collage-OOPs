#include<iostream>
#include<string.h>
using namespace std;
class phone
{
    private:
      string Pname;
      int model;
      float price;
    public:
      void getdata(string name,int m,float p)
      {
        Pname=name;
        model=m;
        price=p;
      } 
      void display()
      {
        cout<<"Mobile name :-- "<<Pname<<endl;
        cout<<"Android Version :-- "<<model<<endl;
        cout<<"Mobile price :-- "<<price<<endl;
      } 
};

int main()
{
    phone s;
    string n;
    cout<<"Enter mobile name :- ";
    getline(cin,n);
    s.getdata(n,11,15000);
    s.display();
    
    return 0;
}
