//To Multiply two private numbers of two classes using friend function

#include<iostream>
using namespace std;

class data2;

class data1
{
    int a;

    public:
    void setdata(int x)
    {
        a = x;
    }

    friend int product(data1,data2);

};
class data2
{
    int a;

    public:
    void setdata(int x)
    {
        a = x;
    }

    friend int product(data1,data2);
};

int product(data1 m,data2 n)
{
    return (m.a*n.a);
}

int main()
{
    data1 u;
    u.setdata(5);
    data2 v;
    v.setdata(6);
    cout<<"The product is equal to:"<<product(u,v)<<endl;
    return 0;
}
