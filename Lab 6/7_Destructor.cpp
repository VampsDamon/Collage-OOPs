// Create 5 objects and destroy all objects using destructor.
#include<iostream>
using namespace std;
static int count=0;
class demo
{
   public:
   demo()
   {
     ++count;
     cout<<" Object "<<count<<" is Created "<<endl;
   }
   ~demo()
   {
     cout<<" Object "<<count<<" is Destroyed  "<<endl;
     count--;
   }
};
int main()
{ 
    cout<<"Main functions objects are created "<<endl;
    demo d1;demo d2;demo d3;
    cout<<"Objects created Inside the parenthesis "<<endl;
    {
        demo d4;
    }
    cout<<"Object destroyed after the end of Parenthesis"<<endl;
    cout<<"Objects created Inside the parenthesis "<<endl;
    {
        demo d5;
    }
    cout<<"Object destroyed after the end of Parenthesis"<<endl;
    cout<<"Remaining Objects are Destroyed after the end of Main Function Parenthesis "<<endl;
    return 0;
}