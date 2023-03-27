/*Parametrized Constructor: Takes argument(parameters) unlike default constructor
    parameter can be any value except the name of class itself
    Can be called Explicitly : sample a= sample(4,6)
            or Implicitly: sample a(4,6)

*/

#include<iostream>
using namespace std;

class sample
{
    int a,b;

    public:
    sample(int x,int y)
    {
        a = x;
        b = y;
        cout<<"This is an example of Parametrized Constructor:"<<endl;
    }
    void display()
        {
            cout<<"The value of 1st number is:"<<a<<" and second number is "<<b<<endl;
        }
    
};
int main()
{
    sample a(10,20);    // Implicit Call
    a.display();

    sample b = sample(40,60);   // Explicit Call
    b.display();
    return 0;
}
