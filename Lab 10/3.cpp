#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[30];
    cout<<"Enter your name :- ";
    cin.getline(name,30);
    cout<<name;
    cout.write(name,3);
    return 0;
}