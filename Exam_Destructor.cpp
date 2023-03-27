//Wap to the destructor calls such that it prints the message "Memory is released".

#include<iostream>
using namespace std;

class destruct
{
    int a,b;

    public:
    destruct()
    {
        a = 20;
        b = 80;
    }

    ~destruct()
    {
        cout<<"Memory is Released!!"<<endl;
    }

    void display()
    {
        cout<<"The sum of "<<a<<" and "<<b<<" is "<<(a+b)<<endl;
    }
};

int main()
{
    destruct d2 ;
    d2.display();
    return 0;
}