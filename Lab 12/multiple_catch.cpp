#include<iostream>
#include<string.h>
using namespace std;
void test(int x)
{

   try
   {
      if(x==1)
       throw x;
       else if(x==0)
        throw 'x';
       else if(x==-1)
        throw 1.0;
       cout<<"End of try-Block\n";  
   }
//    catch(char c){
//     cout<<"Caught a CHaracter\n";
//    }
//    catch(double d){
//     cout<<"Caught a Double\n";
//    }
//    catch(int m){
//     cout<<"Caught a Integer\n";
//    }
//   cout<<"End of try-catch system\n\n";
 catch(...)
 {
    cout<<"Caught an Exception\n";
 }
}
int main()
{
    cout<<"Testing multiples catches\n";
    cout<<"x == 1\n";
    test(1);
    cout<<"x == 0\n";
    test(0);
    cout<<"x == -1\n";
    test(-1);
    cout<<"x == 2\n";
    test(2);
    
    return 0;
}