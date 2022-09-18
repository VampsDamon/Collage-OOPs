#include<iostream>
using namespace std;

int main()
{
    enum month{Jan=1,Feb,March,April,May,June,July,Aug,Sep,Oct,Nov,Dec};
    int ch;
    cout<<"Enter month number :- ";
    cin>>ch;
    switch (ch)
    {
    case Jan:
        cout<<"1st month is January \n";
        break;
    case Feb:
        cout<<"2nd month is February \n";
        break;
    case March:
        cout<<"3rd month is March \n";
        break;
    case April:
        cout<<"4th month is April \n";
        break;
    case May:
        cout<<"5th month is May \n";
        break;
    case June:
        cout<<"6th month is June \n";
        break;
    case July:
        cout<<"7th month is July \n";
        break;
    case Aug:
        cout<<"8th month is August \n";
        break;
    case Sep:
        cout<<"9th month is September \n";
        break;
    case Oct:
        cout<<"10th month is October \n";
        break;
    case Nov:
        cout<<"11th month is November \n";
        break;
    case Dec:
        cout<<"12th month is December \n";
        break;
    
    default:
        cout<<"Enter valid Input \n";
    }
    return 0;
}
