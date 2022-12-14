#include<iostream>
using namespace std;
template <class T1 ,class T2>
class test
{
   T1 a;
   T2 b;
   public:
   test(T1 x,T2 y)
   {
     a=x; b=y;
   }
   void show()
   {
     cout<< "value 1  :-" <<a<<"  value b :- "<<b<<endl; 
   }
};

int main()
{
    test<int ,float>t1(2,3.5);
    test<int ,char>t2(2,'a');
    t1.show();
    t2.show();
    return 0;
}