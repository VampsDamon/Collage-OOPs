#include<iostream>
using namespace std;
void fun(int & x,int & y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int num1=10,num2=20;
    cout<<"Number before swapping \n";
    cout<<"Number 1 :- "<<num1<<"   "<<"Number 2 :- "<<num2<<endl;
    fun(num1,num2);
    cout<<"Number after swapping \n";
    cout<<"Number 1 :- "<<num1<<"   "<<"Number 2 :- "<<num2<<endl;

    return 0;
}
