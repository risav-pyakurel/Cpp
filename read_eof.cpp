#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[50];
    ifstream fin;
    fin.open("sample.txt");
    while(!fin.eof())
    {
        fin.getline(str,49);
        cout<<"from file"<<endl<<str;
    }
    fin.close();
    return 0;
}