#include<iostream>
using namespace std;

class complex
{
    float x;
    float y;

    public:
    complex(){};
    complex(float real, float img)
    {
        x = real;
        y = img;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return(temp);
    }
    void display()
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};

int main()
{
    complex C1,C2,C3;
    C1 = complex(4,2.5);
    C2 = complex(6,3.5);
    C3 = C1 + C2;   //Invokes the binary sum
    C1.display();
    C2.display();
    C3.display();
    return 0;
}