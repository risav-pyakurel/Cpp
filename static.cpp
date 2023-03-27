/* Static Variable:
1)Whenever the a data member is declared static it means that there is only one copy of the data present
and is to be shared by all the member functions and objects no matter how many of them are present
2)These are created normally to maintain the same value or common value in the entire class
3)Memory for the static variable is allocated at the time of declaration
4)All the static varibles are initialized by 0 (default)
5)It can also be accessed using the scope resolution operator(::) outside the class as:
    return_type class_name :: static_variable
    i.e, int student::count;
it is mostly used in counting how many times an object is used in the program
*/

#include<iostream>
using namespace std;

class number
{
    private:
    static int a;       // Static variable

    public:
    void input()
    {
        cout<<"No. = "<<a<<endl;
        a++;
    }
};

int number :: a; // defination of static data member outside the class

int main()
{
    number p,q,r;
    p.input();
    q.input();
    r.input();
    return 0;
}