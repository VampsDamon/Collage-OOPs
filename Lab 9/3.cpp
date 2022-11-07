#include<iostream>
#include<string.h>
using namespace std;
class add
{
   int a;
   public:
   add(int x=0)
   {
     a=x;
   }
   add operator +(add X)
   {
     add sum;
     sum.a=a+X.a;
     return sum;
   }
   void display()
   {
     cout<< a<<endl;
   }
};
int main()
{
    add obj1(2);
    add obj2(3);
    add obj3;
    obj3=obj1+obj2;
    obj1.display();
    obj2.display();
    cout<<" obj1 + obj 2 :- ";
    obj3.display();
    
    return 0;
}