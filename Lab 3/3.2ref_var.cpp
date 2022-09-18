#include<iostream>
using namespace std;
int main()
{
    int Total = 100;
    int & sum=Total;
    cout<<"Value before changes :- "<<endl;
    cout<<"Total = "<<Total<<endl;
    cout<<"Sum = "<<sum<<endl;
    sum=sum+10;
    cout<<"Value after changes :- "<<endl;
    cout<<"Total = "<<Total<<endl;
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
