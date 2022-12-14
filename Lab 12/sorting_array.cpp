#include<iostream>
#include<string.h>
using namespace std;
#include<array>
int main()
{
    int arr[10];
    cout<<"Enter arrays Elements :- \n";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Arrays Elements are :- \n";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    return 0;
}