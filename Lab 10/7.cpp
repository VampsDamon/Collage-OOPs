#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout.fill('*');
    cout.width(5);
    cout<<123<<endl;
    cout.precision(3);
    cout<<123.34567;
    return 0;
}