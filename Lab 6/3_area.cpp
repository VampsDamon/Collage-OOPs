// Write a C++ program to calculate the area of triangle, rectangle and
// circle using constructor overloading. The program should be menu
// driven.
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class area
{
    int side1,side2,side3; //For Triangle
    int radius; //For circle
    int a,b;  //For rectangle
    public:
    area(int x,int y,int z)
    {
        side1=x;
        side2=y;
        side3=z;
        int s=(side1+side2+side3)/2;
        float area =sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout<<"Area of Triangle :- "<<area<<endl;
    }
    area(int r)
    {
        radius = r;
        float area= 3.14*radius*radius;
        cout<<"Area of Circle :- "<<area<<endl;
    }
    area(int m,int n)
    {
        a=m;
        b=n;
        cout<<"Area of Rectangle :- "<<a*b<<endl;
    }
   
};

int main()
{
    int s1,s2,s3;
    int r;
    int a,b;
    int ch;
    do
    {
        cout<<"1 :- Area of Triangle "<<endl;
        cout<<"2 :- Area of Circle "<<endl;
        cout<<"3 :- Area of Rectangle "<<endl;
        cout<<"4 :- Exit "<<endl;
        cout<<"Enter your choice :- ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        {
        cout<<"Enter 3 Sides of Triangle :- ";
        cin>>s1>>s2>>s3;
        area triangle(s1,s2,s3);
        }    
        break;
        case 2:
        {
        cout<<"Enter radius of Circle :- ";
        cin>>r;
        area circle(r);
        }      
          break;  
        case 3:
        {
        cout<<"Enter 2 Sides of Rectangle :- ";
        cin>>a>>b;
        area rectangle(a,b);
        }
        break;
        case 4:
        exit(1);    
        default:
        cout<<"Enter Valid Input "<<endl;
        break;
        }
    } while (ch!=4);
    return 0;
}