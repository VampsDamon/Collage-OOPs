#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string sub[5]={"OOPS","DSA","MATH","SE","DE"};
    int marks[5]={99,100,95,80,90};
    cout.width(6);
    cout<<"SUBJECT";
    cout.width(10);
    cout<<"MARKS"<<endl;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cout.width(6);
        cout<<sub[i];
        cout.width(10);
        cout<<marks[i]<<endl;
        sum=sum+marks[i];
    }
    cout.fill('=');
    cout.width(42);
    cout<<"\nYour Percentage :- "<<sum/5<<endl;
     cout.fill('=');
    cout.width(22);
    cout<<'=';
    return 0;
}