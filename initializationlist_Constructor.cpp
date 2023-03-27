/* Syntax:
constructor (argument list) : initialization section
{}; */

#include<iostream>
using namespace std;

class section
{
    int a,b;

    public:
    section(int i,int j) : a(i) , b(j)      // a will get value of i and b will get that of j
    //section(int i,int j) : a(i) , b(i+j) 
    //section(int i,int j) : a(i) , b(2*j) 
    //section(int i,int j) : a(i) , b(a+j) 
    //section(int i,int j) : b(j),a(i+j) (This will create problem coz. a is intialized  first) 
    {
        cout<<"Constructor Succesfully Initialized!!"<<endl;
        cout<<"The corresponding value of a is:"<<a<<" and b is: "<<b<<endl;
    }
};

int main()
{
    section s(7,9);
    return 0;
}