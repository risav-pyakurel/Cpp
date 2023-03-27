#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char str1[80];
    char str2[80];
    fin.open("sample.txt");
    fin>>str1;   //reads only first word coz of spaces.
    fin.getline(str2,80);   //Reads it all;
    cout<<"From File:"<<endl;
    cout<<str1<<endl;
    cout<<str2;
    return 0;

}