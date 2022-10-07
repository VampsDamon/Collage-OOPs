// 10. Write class declarations and member function definitions for a C++
// base class to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and
// Part-time (number of working hours, hourly rate, and salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
#include<iostream>
#include<string.h>
using namespace std;
const int size=50;
class employee
{
   public:
   int count=0;
   int emp_code[size];
   char name[30][size];
   
   void get_info()
   {
     cout<<"Enter Employee Name :- ";
     cin>>name[count];
     cout<<"Enter employee code :-  ";
     cin>>emp_code[count];
     count++;
   }
};
class full_time : public employee
{
  private:
  int daily_rate=2000;
  int days[size];
  int salary[size];
  public:
  int count=0;
  void full()
  {
    cout<<"Enter number of days you work :- ";
    cin>>days[count];
    salary[count]=days[count]*daily_rate;
    count++;
  }
  void display()
  {
    cout<<"Employee Name    Employee I'd        Salary "<<endl;
    for (int i = 0; i < count; i++)
    {
    cout<<name[i]<<"              "<<emp_code[i]<<"                   "<<salary[i]<<endl;
    }
    
  }
  
};
class part_time : public employee
{
  private:
  int daily_rate=200;
  int hrs[size];
  int salary[size];
  public:
  int count=0;
  void part()
  {
    cout<<"Enter number of hours you work :- ";
    cin>>hrs[count];
    salary[count]=hrs[count]*daily_rate;
    count++;
  }
  void display()
  {
    cout<<"Employee Name    Employee I'd        Salary "<<endl;
    for (int i = 0; i < count; i++)
    {
    cout<<name[i]<<"              "<<emp_code[i]<<"                   "<<salary[i]<<endl;
    }
    
  }
};
int main()
{
  full_time fullT;
  part_time partT;
  int ch;
  do
  {
    cout<<" 1 -->  Work for a full time \n";
    cout<<" 2 -->  Work for a part time \n";
    cout<<" 3 -->  Details of full time Employees \n";
    cout<<" 4 -->  Details of part time Employees \n";
    cout<<" 5 -->  Exit"<<endl;
    cout<<"Enter your Choice :- ";
    cin>>ch;
    switch(ch)
    {
      case 1:
      fullT.get_info();
      fullT.full();
      break;
      case 2:
      partT.get_info();
      partT.part();
      break;
      case 3:
      fullT.display();
      break;
      case 4:
      partT.display();
      break;
      case 5:
      exit(1);
      default:
      cout<<"Enter valid Input\n";
    }
  } while (ch!=5);
    return 0;
}