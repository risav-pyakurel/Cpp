/* It is the constructor used to copy content of one constructor to another
If no copy constructor is presnt but if it is called then, simply creates own copy constructor and thus no error
is displayed
*/

#include<iostream>
using namespace std;

class sample
{   
    int a;

    public:
    sample()        // Default constructor
    {
        cout<<"This is from default constructor:"<<endl;
        a = 1;
    }

    sample(int x)   // Parameterized Constructor
    {   
        cout<<"This is from parametrized constructor:"<<endl;
        a = x;
    }

    sample(sample &D)   // Copy constructor
    {
        cout<<"This is from Copy constructor:"<<endl;
        a = D.a;
    }
    void print()
    {
        cout<<"Your value is:"<<a<<endl;
    }
};

int main()
{
    sample s; //Default call
    s.print();
    sample p(12);       // parametized call
    p.print();
    sample q(p);    //copy constructor called
    q.print();
    sample r = s;   //copy constructor called again
    r.print();
    sample t;   // object created but not called
    t = p;  // cannot call 
    t.print();
    return 0;
}