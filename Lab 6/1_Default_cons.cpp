// Class with a default constructor with some default message.
#include<iostream>
using namespace std;
class msg
{
    public:
   msg()
   {
     cout<<"This is Default Constructor  "<<endl;
   }
};

int main()
{
    msg m;
    return 0;
}
