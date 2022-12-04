//Create file using constructor
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream  obj_out("sid.txt");
    cout<<"Enter Item Name :- ";
    char name[30];
    cin.getline(name,30);
    obj_out<<name <<"\n";
    cout<<"Enter Item Cost :- ";
    int cost;
    cin>>cost;
     obj_out<<cost<<"\n";
     obj_out.close();
     ifstream obj_read("sidl.txt");
     obj_read>>name;
     obj_read>>cost;
     cout<<"Name is :- "<<name<<endl;
     cout<<"cost is :- "<<cost<<endl;
     obj_read.close();
    return 0;
}