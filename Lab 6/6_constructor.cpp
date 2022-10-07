// Write a C++ program to create a class having multiple constructors
// a. One default constructor
// b. One parameterized constructor
// c. One copy constructor
#include<iostream>
using namespace std;
class demo
{
   int a;
   public:
   demo()
   {
     a=5;
     cout<<"This is default constructor "<<endl;
     cout<<"Value of a is :- "<<a<<endl;

   }
   demo(int x)
   {
     a=x;
     cout<<"This is Parametrized constructor "<<endl;
     cout<<"Value of a is :- "<<a<<endl;
   }
   demo(demo & x)
   {
     a=x.a;
     cout<<"This is copy constructor "<<endl;
     cout<<"Value of a is :- "<<a<<endl;
   }
};
int main()
{
    demo obj1;
    demo obj2(10);
    demo obj3(obj2);
    return 0;
}
