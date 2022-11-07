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
  friend add operator +(add ,add);
  
   void display()
   {
     cout<< a<<endl;
   }
};
  add operator +(add X,add Y)
   {
     add sum;
     sum.a=Y.a+X.a;
     return sum;
   }
 
int main()
{
    add obj1(10);
    add obj2(5);
    add obj3;
    obj3=obj1+obj2;
    obj1.display();
    obj2.display();
    cout<<" obj1 + obj 2 :- ";
    obj3.display();
    
    return 0;
}