#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;      //For writing
    fout.open("sample.txt");
    fout<<"This is my first program in file handling.";
    fout<<"\n Hello Friends!";
    fout.close();
    cout<<"Done!!"<<endl;
    return 0;
}


