// Find the largest of two numbers using the friend
// function.
#include<iostream>
using namespace std;
class A
{
    private:
    int a,b;
    public:
    A(int m,int n)
    {
        a=m;
        b=n;
    }
    friend int max(A);
};
int max(A x)
{
   if(x.a>x.b)
   return x.a;
   else
   return x.b;
}
int main()
{
    A obj1(10,20);
    A obj2(500,260);
    cout<<"Largest :-  "<<max(obj1)<<endl;
    cout<<"Largest :-  "<<max(obj2)<<endl;
    return 0;
}