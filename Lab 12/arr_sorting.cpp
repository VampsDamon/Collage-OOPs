#include<iostream>
#include<string.h>
using namespace std;
template<class T>
void sort(T arr[],int n)
{
    int j=n;
    while(j<=n)
    {
      for(int i=0;i<j && i+1<j;i++)
       {
          if(arr[i]>arr[i+1])
          {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
          }
       }
       j--;
    }
     
}
int main()
{
    int arr[5]={2,9,4,16,1};
    sort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}