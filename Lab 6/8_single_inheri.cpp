// Write a C++ program to increment the salary by 10 percent using
// single inheritance. Accept salary from the user in base class and
// display the new salary in derived class.
#include<iostream>
using namespace std;
class salary 
{
  public:
  float sal;
  salary()
  {
    float val;
    cout<<"Enter your Salary :- ";
    cin>>val;
    sal=val;
  }
};
class incre_sal : public salary
{
   public:
   void incr()
   {
     sal= sal+ (10*sal)/100;
   }
   void display()
   {
     cout<<"Salary after increment :- "<<sal<<endl;
   }
};
int main()
{
    incre_sal shahid;
    shahid.incr();
    shahid.display();   
    return 0;
}