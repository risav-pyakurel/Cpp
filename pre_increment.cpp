#include<iostream>
using namespace std;

class sample
{
    int a;
    int b;

    public:
    void getdata(int x,int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout<<"The value of are"<<a<<" and "<<b<<endl;
    }
    void operator ++ ()  //pre-Increment(paile increase garxa then assign)
    {
        ++a;
        ++b;
    }
};

int main()
{
    sample s;
    s.getdata(4,-9);
    s.display();
    ++s;     //Invokes the unary operator
    s.display();
    return 0;
}