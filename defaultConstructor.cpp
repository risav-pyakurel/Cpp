/* Constructor: Special type of function whose task is to initialize object
will be of same name as that of the class
is automatically invoked(called) when object is created
Always to be created in public part and do not have any return type

*/

// Default Constructor:Takes no argument. 

#include<iostream>
using namespace std;

class sample
{
    int a,b;    // Private nalekhe ni hunxa it means private part ma parxan

    public: //COmpulsary lekhnai parne hunxa
    sample()    //Default constructor (no argument means bracket bhitra kei xaina)
    {
        a = 10;
        b = 20;
        cout<<"This is the Default Constructor example:"<<endl;
    }

    void display()
    {
        cout<<"The value of 1st number is:"<<a<<" and second number is "<<b<<endl;
    }

};

int main()
{
    sample s;   // Default constructor called(invoked)
    s.display();
    return 0;
}
