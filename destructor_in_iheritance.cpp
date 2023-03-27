/*Destructor can be used in inheritance and functions as the same manner as that in the other functions:
Firstly it destructs the obj from derived classes then that to the base classes
this is seen in the multi-level inheritance.
But in the multiple inheritance the order of execution is determined as per the order of declaration
*/
#include<iostream>
using namespace std;

class A
{
    public:
    ~A()
    {
        cout<<"This is Destructor from Main Base Class A"<<endl;
    }
};
class B:public A
{
    public:
    ~B()
    {
        cout<<"This is Destructor from Base Class B"<<endl;
    }
};
class C:public B{
    public:
    ~C()
    {
        cout<<"This is Destructor from Derived Class C"<<endl;
    }
};

int main()
{
    C x;
    return 0;
}