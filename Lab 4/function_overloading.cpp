#include<iostream>
using namespace std;
class add
{
    public:
    void sum(int a ,int b )
    {
        int s=a+b;
        
        cout<<"Sum :- "<<s<<endl;
    }

    
    void sum(double a, double b )
    {
        double s=a+b;
        
        cout<<"Sum :- "<<s<<endl;
    }
   
    void sum(int a,float b,int d )
    {
        float s=a+b+d;
        
        cout<<"Sum :- "<<s<<endl;
    }   

};
 
int main()
{
    add a;
    add b;
    add c;
    a.sum(2,3);
    b.sum(2.4,3.2);
    c.sum(2,3.5,7);
    return 0;
}