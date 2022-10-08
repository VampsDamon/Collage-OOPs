// 1. Write a program to add 2 polynomials like 4x+3y and
// 7x+ 5y and output in the form of a third polynomial
// (11x+8y)after addition.
// Take the value of a and b from user(where a is the
// coefficient of x and b is the coefficient of y)
// (using the concept object pass as function argument
// and object return from the function) .
#include<iostream>
using namespace std;
class polynomial
{
   private:
   int a,b;
   public:
   void get_data(int m,int n)
   {
     a=m;
     b=n;
   }
   polynomial add(polynomial X,polynomial Y)
   {
      polynomial sum;
      sum.a=X.a+Y.a;
      sum.b=X.b+Y.b;
      return sum;
   }
   void display()
   {
      cout<<a<<"x + "<<b<<"y "<<endl;
   }
};
int main()
{
    polynomial obj1;
    polynomial obj2;
    polynomial obj3;
    obj1.get_data(4,3);
    obj2.get_data(7,5);
    obj1.display();
    obj2.display();
    cout<<"Sum of above Polynomials :- "<<endl;
    obj3= obj3.add(obj1,obj2);
    obj3.display();
    return 0;
}
