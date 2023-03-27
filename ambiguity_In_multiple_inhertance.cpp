/* Ambiguity arises in two cases (1) Multiple Inheritance (2)Hybrid Multi-path Inheritance
1) In multiple inheritance when two base classes have an exactly similiar member,a class is
derived from both of the base clases has no members.Then if we try to access these members
we get/face ambigutity
To solve we write: Obj.classname :: member name */

#include<iostream>
using namespace std;

class A
{
    public:
    void show()     //same member function
    {
        cout<<"This is from Class A:"<<endl;
    }
};

class B
{
    public:
    void show()     // same member function
    {
        cout<<"This is from Class B:"<<endl;
    }
};

class C : public A,public B
{
};

int main()
{
    C c;
   // c.show();   Ambiguity Arises
    c.A :: show();  //Resolving the ambiguity
    c.B :: show();  // Resolving the ambiguity;
    return 0;
}
