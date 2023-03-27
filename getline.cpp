/* getline() function is commonly used in the process to read long string in the c++ program and 
read() is used in displaying that:
*Syntax:
        cin.getline(line,size)
Takes account on size specially if blank spaces is also presnt then it is also counted */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"What is your name?";
    getline(cin,name);
    cout<<"Glad to meet you:"<<name<<endl;

    char surname[10];
    cout<<"What is your surname?"<<endl;
    cin.getline(surname,10);
    cout<<"Thank you Mr."<<surname<<endl;
}