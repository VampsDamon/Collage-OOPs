#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class error
{
    int err_code;
    char *err_desc;
    public:
    error(int c,char *d)
    {
      err_code=c;
      err_desc=new char[strlen(d)];
      strcpy(err_desc,d);
    }
    void err_display()
    {
        cout<<"Error code : "<<err_code<<endl<<"Error Description : "<<err_desc<<endl;
    }
};
int main()
{
    try
    {
        cout<<"Enter any key to through the the test expression ";
        getch();
        throw error(99,"Test Exception");
    }
    catch(error e)
    {
       cout<<"\nException caught successfully\n";
       e.err_display();
    }
    getch();
    return 0;
}