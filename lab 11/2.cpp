//Read and Using open and Close function
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //For Write Data into the File
    ofstream write_data;
    write_data.open("b.txt");
    string name="Shahid ";
    write_data<<name;
    write_data.close();
    cout<<"Data is Written Successfully\n ";
    ifstream read_data;
    read_data.open("b.txt");
    read_data>>name;
    cout<<" Name :-  "<<name;
    read_data.close();

    return 0;
}