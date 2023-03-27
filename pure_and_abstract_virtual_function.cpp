/*As we already used the concept of runtime polymorphism with the help of pointers and inheritance
We can now neglect the function of the base class and appoint a pointer from base class to point and
display the function using virtual function concept

Pure Virtual Function is also the same concept but we totally ignore the given base function and then
assign that function to 0
This assignment means Do-Nothing function
*/

/* Abstract Class is one that is not used to create an objects
These are specifically used to behave as base class 
These contains pure virtual function which cannot be initiatied*/

#include<iostream>
using namespace std;
class A     //Abstract Class
{
    public:
    virtual void show() = 0;    //Pure virtual FUnction
};
class B: public A
{
    public:
    void show()     //Pure virtual function is overriden here
    {
        cout<<"Show method is implemented here:"<<endl;
    }
};

int main()
{
    A *ptr;
    //ptr = new A;  //Cannot create instance of abstract class A
    ptr  = new B;
    ptr->show();
    return 0;
}