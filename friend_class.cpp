#include<iostream>
using namespace std;

class alpha
{
    int x;

    public:
    void getdata(int d)
    {
        x = d;
    }
    void show()
    {
        cout<<"This is from class alpha:"<<x<<endl;
    }

    friend class beta;      //Function call as friend function
};

class beta
{
    public:
    void function(alpha a)
    {
        cout<<"This is from class beta:"<<a.x<<endl;
    }
};

int main()
{
    alpha s;
    s.getdata(45);
    s.show();
    beta b;
    b.function(s);
    return 0;
}