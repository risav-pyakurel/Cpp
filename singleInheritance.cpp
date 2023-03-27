// The type of inheritance in which there is only one base class and only one derived class
// i.e, A------->B

#include<iostream>
using namespace std;

class Base  // Base Class
{
    int num1;

    public:
    int num2;
    void setnum()
    {
        num1 = 7;
        num2 = 9;
    }
    int getnum1()
    {
        return num1;
    }
    int getnum2()
    {
        return num2;
    }
};

class derived : public Base     
// Being derived Publically i.e, public sec of base class will be public sec for derived 
{
    int num3;

    public:
    void process();
    void display();

};

void derived :: process()
{
    num3 = (num2*getnum1());//private data from base class is not inheritable so using member function  
}
void derived :: display()
{ 
    cout<<"This is number 1:"<<getnum1()<<endl;
    cout<<"This is number 2:"<<num2<<endl;
    cout<<"This is number 3:"<<num3<<endl;
}

int main()
{
    derived d;
    d.setnum();
    d.process();
    d.display();
    return 0;
}