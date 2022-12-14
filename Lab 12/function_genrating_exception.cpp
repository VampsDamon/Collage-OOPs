#include<iostream>
#include<string.h>
using namespace std;
void divide(int a,int b,int c)
{
    cout<<"\nWe are the Inside the function\n ";
    if(a-b!=0)
    {
        int R=c/(a-b);
        cout<<"Result :- "<<R<<endl;
    }
    else
    {
        throw(a-b);
    }
}
int main()
{
   try
   {
     cout<<"Inside the try Body"<<endl;
     divide(20,10,100);
     divide(10,10,10);
   }
   catch(int i)
   {
      cout<<"EXCEPTION FIND\n";
   }
    cout<<"End of the Programme\n";
    return 0;
}