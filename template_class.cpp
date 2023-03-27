/*Template:
Used for generic programming
New concept in C++ which enables us to define generic classes and functions(general) programming
It can be used to create the family of classes and fucntions
*/
#include<iostream>
using namespace std;

template<class T1>
class Test
{
    T1 a;

    public:
    void add(T1 x,T1 y)
    {
        a = x+y;
    }
    void sub(T1 x,T1 y)
    {
        a = x-y;
    }

    void show()
    {
        cout<<a<<endl;
    }
};
int main()
{
    Test <int> Testi;
    Testi.add(9,1);
     Testi.show();
    Testi.sub(10,8);
    Testi.show();
    return 0;
}