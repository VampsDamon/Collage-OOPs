#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int n=12345,i=0;
    int nn=54321;
   int j=4;
    while(i<5)
    {
       cout.width(5);
       cout<<n;
       n=n-(nn%10)*pow(10,j);
       cout<<" ";
       cout<<nn;
       nn=nn/10;
       cout<<endl;
       i++;
       j--;
    }
    
    
    return 0;
}