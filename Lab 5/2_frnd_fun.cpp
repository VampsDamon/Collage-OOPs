// 2. Create the program in c++ program to add two
// numbers using the friend function.
// a. Class having two data members (private)
// b. Friend function (addition)
#include<iostream>
using namespace std;
class sum
{
    public:
    int a,b;
    public:
    sum(int x,int y)
    {
        a=x;
        b=y;
    }
   friend void add(sum);
    
};
void add(sum x)
{
   
    cout<<"Sum :- "<<x.a+x.b<<endl;
}
int main()
{   
    sum obj1(2,3);
    add(obj1);
   return 0;
}