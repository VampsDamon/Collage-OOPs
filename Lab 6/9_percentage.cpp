// Write a C++ program to calculate the percentage of a student using
// multi-level inheritance. Accept the marks of three subjects in base
// class. A class will derived from the above mentioned class which
// includes a function to find the total marks obtained and another class
// derived from this class which calculates and displays the percentage
// of student.
#include<iostream>
using namespace std;
class marks
{
  public:
  int phy,chem,math;
  marks()
  {
    int p,c,m;
    cout<<"Enter Your Marks in Phy Chem and Math :- ";
    cin>>p>>c>>m;
    phy=p;
    chem=c;
    math=m;
  }
};
class total_marks : public marks
{
  public:
  int total=phy+chem+math;;
};
class percentage : public total_marks
{
  public:
  float per=(total*100)/300;
  void display()
  {
    cout<<"Your Percentage :- "<<per<<endl;
  }
};
int main()
{
    percentage shahid;
    shahid.display();
    return 0;
}