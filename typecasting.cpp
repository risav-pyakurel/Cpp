#include<iostream>
using namespace std;

int main()
{
    int a =50;
    float b =  99.99;
    int z = a+b;

    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of a is :"<<float(a)<<endl;
    cout<<"The value of b is :"<<int(b)<<endl;
    cout<<"The value of a is :"<<int(b)<<endl;
    cout<<"The value of b is :"<<float(a)<<endl;
    cout<<"The sum is :"<<a+b<<endl;        //Implicit conversion
    cout<<"The sum is :"<<z<<endl;  //Explicit

    return 0;
}