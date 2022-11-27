#include<iostream>
#include<string.h>
using namespace std;
int char_arr_length(char name[],int n)
{
    int count=0;
    int i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char name[30];
    cout<<"Enter your name :- ";
    cin.getline(name,30);
   // int i=name.size();//
   int size=char_arr_length(name,30);
    int i=1;
    while(i!=size)
    {
       cout.write(name,i);
       cout<<endl;
       i++;
    }
     i=size;
    while(i!=0)
    {
       cout.write(name,i);
       cout<<endl;
       i--;
    }
    
    return 0;
}