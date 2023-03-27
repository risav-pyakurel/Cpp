#include<iostream>
using namespace std;

class Distance
{
    int x;
    int y;

    public:
    void getdata()
    {
        cout<<"Enter feet and inches:"<<endl;
        cin>>x>>y;
    }
    Distance operator +(Distance a)
    {
        Distance b;
        b.x = x + a.x;
        b.y = y + a.y;
        b.x = b.x + b.y/12;
        b.y = b.y%12;
        return b;
    }
    void display()
    {
        cout<<"("<<x<<" , "<<y<<")"<<endl;
    }
}; 

int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3 = d1 + d2;   //Binary add operator
    d1.display();
    d2.display();
    d3.display();
    return 0;
}