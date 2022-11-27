#include<iostream>
//#include<string.h>
using namespace std;

int main()
{
    char name='p';
    cout<<"Enter Name :- ";
    
    while(name!='\0')
    {
        cin.get(name);
        cout.put(name);
    }

    return 0;
}
