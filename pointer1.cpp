#include<iostream>
using namespace std;

int main()
{
    int a = 12;
    int *b = & a; 
    
    // int *b;      b = &a;


    // ampersand(&) is used to denote the memory address of a
    // if used then it prints the same corresponding address
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The address of b is:"<<b<<endl;

    //here * is a deferencing operator used to provide the value stored in given operator
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<*b<<endl;



    return 0;
    
}