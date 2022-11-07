#include<iostream>
using namespace std;
class sign
{
    int a;
    public:
    sign(int x)
    {
        a=x;
    }
    void operator -()
    {
        a=-a;
    }
    void display()
    {
        cout<<"a :- "<<a<<endl;
    }
};

int main()
{    
    sign obj1(10);
    sign obj2(-3);
    obj1.display();
    obj2.display();
    -obj1;
    -obj2;
    cout<<"After sign change \n";
      obj1.display();
    obj2.display();
    return 0;
}