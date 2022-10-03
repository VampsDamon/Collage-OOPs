#include<iostream>
#include<string.h>
using namespace std;
class training
{
   int days;
   string technology;
   public:
   training(int d=60,string tech="Python")
   {
     days=d;
     technology=tech;
   }
   void display()
   {
     cout<<"Technology :- "<<technology<<endl;
     cout<<"Number of Days :- "<<days<<endl;
   }
};

int main()
{
    int d;
    string t;
    bool ch;
    cout<<"Technology Available :- "<<endl;
    cout<<"Python  "<<"C++   "<<"Java"<<endl;
    cout<<"Days Available :- "<<endl;
    cout<<"45  "<<"60   "<<"90"<<endl;
    cout<<"Enter 0 for default and 1 for any changes "<<endl;
    cin>>ch;
    if(ch==1)
    {
    cout<<"Enter tech :- ";
    cin>>t;
    cout<<"Enter days :- ";
    cin>>d;
    if((d==45 || d==90 || d==60 ) && (t=="Python" || t=="C++" || t=="Java"))
    {
        training t1(d,t);
        t1.display();
    }
    else
    cout<<"Not available"<<endl;
    }
    else
    {
    training t1;
    t1.display();

    }
    return 0;
}