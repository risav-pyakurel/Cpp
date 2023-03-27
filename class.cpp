// Class is used to provide a platform for making objects:
#include<iostream>
using namespace std;

class display     // Class Defination
{
    private:    // Cannot be used directly using objects (e.g- values.a = 2)
    int a,b,c;     // Can declare function too in private but cannot be called directly as values.

    public:     // Can be used directly using objects (e.g- values.b = 1)
    int d,e;

    void getdata(int a1, int b1, int c1);  // Function Declaration inside class
    void show()         // Both Function Declaration and Function Defination
    {
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of d is:"<<d<<endl;
        cout<<"The value of e is:"<<e<<endl;

    }
};

void display :: getdata(int a1, int b1, int c1)// Function Declaration outside class using scope resoln sign(::)
{
    a = a1;
    b = b1;
    c = c1;

}

int main()
{
    display values;
    values.getdata(2,4,6);
    values.d = 1;
    values.e = 3;
    values.show();
    return 0;
}