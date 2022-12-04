#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
    string name1,name2;
    ifstream fin1,fin2;
    //First create the file a.txt and b.txt
    fin1.open("b.txt");
    fin2.open("c.txt");
    getline(fin1,name1);
    getline(fin2,name2);
    cout<<name1<<endl;
    cout<<name2<<endl;
    fin1.close();
    fin2.close();
    ofstream fout;
    fout.open("d.txt");
    fout<<name1<<endl;
    fout<<name2;
    fout.close();
    cout<<"Data is Written Successfully \n";
    return 0;
}