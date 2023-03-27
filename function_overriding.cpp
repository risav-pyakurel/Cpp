/* Function Overriding is the process of defining derived class with the same name and signature of the
base class. In this case, the member function of base class is over-riden and that of derived class is invoked.
*/

#include<iostream>
using namespace std;

class Base
{
    public:
    void show()
    {
        cout<<"This is from Base Class!!"<<endl;
    }
};
class Derived: public Base
{
    public:
    void show()     //Overriding function
    {
        cout<<"This is from Derived Class!!"<<endl;
    }
};
int main()
{
    Derived a;
    a.show();       //Invokes the derived class member function
    a.Base::show(); //Invokes the base class member function
    return 0;
}