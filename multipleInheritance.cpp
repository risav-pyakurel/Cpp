// multiple base class bata eeutai derive hune
// A----> B and also C-----> B

#include<iostream>
using namespace std;

class Base1
{
    protected:  // It means private ni xa but inherit ni garna milxa
    int num1;

    public:
    void getnum1(int a)
    {
        num1 = a;
    }
};

class Base2
{
    protected:  // It means private ni xa but inherit ni garna milxa
    int num2;

    public:
    void getnum2(int b)
    {
        num2 = b;
    }
};
class derived : public Base1,public Base2
{
    public:
    void show()
    {
        cout<<"This is from Base1:"<<num1<<endl;
        cout<<"This is from Base2:"<<num2<<endl;
        cout<<"This is multiplication of num1 and num2:"<<(num1*num2)<<endl;
        // num1 ra num2 directly use garnu paeko karan chai protected section ma vaera ho
    }
};

int main()
{
    derived d;
    d.getnum1(40);
    d.getnum2(2);
    d.show();
    return 0;
}