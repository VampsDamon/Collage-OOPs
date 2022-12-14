#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a and b :- ";
    cin>>a>>b;
    sid:
    try{
          if(b==0)
          throw(b);
          else
          cout<<"A/B is "<<a/b;
    }
    catch(int x)
    {
        cout<<"Catch a Exception ......\n";
        cout<<"Enter the value of b again :- ";
        cin>>b;
        goto sid;
    }
    return 0;
}