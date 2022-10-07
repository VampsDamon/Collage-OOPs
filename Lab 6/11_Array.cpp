// 11. A Class having array A1, another class having array B1 the third class
// add both array and display the result.(Multiple inheritance)
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    int A_arr[5]={1,2,3,4,5};
};
class B
{
    public:
    int B_arr[5]={10,13,45,67,80};
};
class add : public A , public B
{
   public:
   int sum[5];
   void s()
   {
      for(int i = 0; i < 5; i++)
      {
        sum[i]=A_arr[i]+B_arr[i];
      }
   }
   void display()
   {
     cout<<"Sum of Arrays :- "<<endl;
     for (int i = 0; i < 5; i++)
     {
        cout<<A_arr[i]<<" + "<<B_arr[i]<<" = "<<sum[i]<<endl;
     }
     
   }
   
};
int main()
{
    add obj;
    obj.s();
    obj.display();
    return 0;
}