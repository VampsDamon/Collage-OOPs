#include<iostream>
using namespace std;
class sign
{
    int a;
    public:
    sign(int x=0)
    {
        a=x;
    }
     friend sign operator ++(sign);
     friend sign operator --(sign);
    
    void display()
    {
        cout<<"a :- "<<a<<endl;
    }
};
sign operator ++(sign X)
{
    sign Y;
   Y.a=++X.a;
   return Y;
}
sign operator --(sign X)
{
    sign Y;
   Y.a=--X.a;
   return Y;
}
int main()
{    
    sign obj1(10);
    sign obj2(3);
    obj1.display();
    obj2.display();
   obj1= ++obj1;
   obj2= ++obj2;
    cout<<"After Increment \n";
      obj1.display();
    obj2.display();
    cout<<"After Decrement \n";
    obj1= --obj1;
   obj2= --obj2;
     obj1.display();
    obj2.display();
    return 0;
}