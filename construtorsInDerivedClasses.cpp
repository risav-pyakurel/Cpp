#include<iostream>
using namespace std;

class Base1
{
    int num1;

    public:
    Base1(int i)
    {
        num1 = i;
        cout<<"Constructor from Base1 is called!"<<endl;       
    }
    void print1()
    {
        cout<<"The value from Base 1 is "<<num1<<endl;
    }
};

class Base2
{
    int num2;

    public:
    Base2(int i)
    {
        num2 = i;
        cout<<"Constructor from Base2 is called!"<<endl;       
    }
    void print2()
    {
        cout<<"The value from Base 2 is "<<num2<<endl;
    }
};

class derived : public Base1, public Base2       // Order of execution from Constructor
{
    int der1,der2;

    public:
    derived(int a, int b,int c,int d) : Base1(a),Base2(b)  // This doesn't have control in execution
    {
        der1 = c;
        der2 = d;
        cout<<"Constructor from Derived class is called!"<<endl;
    }
    void print3()
    {
        cout<<"The derived values are "<<der1<<" and "<<der2<<endl;
    }
};

int main()
{
    derived sachin(1,2,3,4);
    sachin.print1();
    sachin.print2();
    sachin.print3();
    return 0;
}