#include<iostream>
// #include<string.h>
using namespace std;
template <class T>
class calculator
{
   T a,b;
   public:
   T add();
   calculator(T x,T y)
   {
     a=x; b=y;
   }
   void show()
   {
     cout<< "value 1  :-" <<a<<"  value b :- "<<b<<endl; 
    cout<<"Sum of a and b :- "<<add()<<endl;
   }
  
   
  //  void div()
  //  {
  //   cout<<"A divided by B :- "<<a/b<<endl;
  //  }
  //  void diff()
  //  {
  //   cout<<"Difference of a and b :- "<<a-b<<endl;
  //  }
  //  void prod()
  //  {
  //   cout<<"Product of  of a and b :- "<<a*b<<endl;
  //  }
};
template<class T>
T calculator<T>::add()
{
   return a+b;
}
int main()
{
    calculator<int>T1(2,3);
    calculator<float>T2(2.7,3.9);
    T1.show();
    T2.show();
    // T1.sum();
    // T1.diff();
    // T1.prod();
    // T1.div();
    // calculator<float>T2(2.4,3.5);
    // T2.show();
    // T2.sum();
    // T2.diff();
    // T2.prod();
    // T2.div();
    // return 0;
}