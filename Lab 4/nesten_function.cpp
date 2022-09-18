#include<iostream>
#include<string.h>
using namespace std;
class product
{
    private:
      string Pname;
      int number;
      float price;
    public:
      void getdata(string name,int n,float p)
      {
        Pname=name;
        number=n;
        price=p;
      } 
      void display()
      {
        cout<<"Product name :-- "<<Pname<<endl;
        cout<<"Enter quantity :-- "<<number<<endl;
        cout<<"Product price :-- "<<pri()<<endl;
      } 
      float pri()
      {
        float p=number*price;
        return p;
      }
};

int main()
{
    product s;
    string n;
    int q;
    float p;
    cout<<"Enter Product name :- ";
    getline(cin,n);
    cout<<"Enter Product Quantity :- ";
    cin>>q;
    cout<<"Enter Product Price :- ";
    cin>>p;
    s.getdata(n,q,p);
    s.display();
    
    return 0;
}