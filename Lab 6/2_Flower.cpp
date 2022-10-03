// Create a C++ class for flower object with the following attributes
// flower id, flower name, flower color, total number of flowers. Write
// parameterized constructor which initializes data members and also
// create a display function.
#include<iostream>
#include<string.h>
using namespace std;
class flower
{
  int f_id;
  string f_name;
  string f_color;
  int f_total;
  public:
  flower(int i,string n,string c,int t)
  {
     f_id=i;
     f_name=n;
     f_color=c;
     f_total=t;   
  }
  void display()
  {
    cout<<"Flower Name :- "<<f_name<<endl;
    cout<<"Flower I'd :- "<<f_id<<endl;
    cout<<"Flower Color :- "<<f_color<<endl;
    cout<<"Total Number of Flower :- "<<f_total<<endl;
  }
};

int main()
{
    flower f(12,"Rose","Red",10);
    f.display();
    return 0;
}