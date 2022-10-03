// Write a C++ program to calculate the value of following series using
// copy constructor and Inline member function.
// S = 1 2  + 2 2  + 3 2  + 4 2  . . . + n 2
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class series
{
   int terms;
   public:
   series(int t)
   {
    terms=t;
   }
   series(series &x)
   {
    terms=x.terms;
   }
   void data()
   {
    int sum=0;
     for (int i = 1; i <=terms ; i++)
     {
        cout<<pow(i,2)<<" + ";
        sum=sum+pow(i,2);   
     }cout<<endl; 
     cout<<"Sum of the Series :- "<<sum<<endl;
   }
};


int main()
{
    series s1(5);
    series s2(s1);
    s1.data();
    cout<<"After copy :- "<<endl;
    s2.data();
    return 0;
}