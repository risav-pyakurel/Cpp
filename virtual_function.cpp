/*Virtual means that exists in the appeareance but not in the reality
*Simply bhujda haati ko dekhaune daat eeuta khane daat eeuta *
It means that when virtual function is used, it appears that a certain function is to be called
and displayed but another function will be called and displyed.
///This is to be used when we encounter a situation where both base class and derived class have 
same member functions. Therefore we use/add virtual keyword in front of the base class function and thus 
called virtual functions. (This means we would be able to run the function of derived class using the base
class pointer.)
*/

#include<iostream>
using namespace std;

class base
{
    public:
    int var_base = 25;
     virtual void display() //virtual means go and print derived's Function (display)
    {
        cout<<"This is from Base class:"<<var_base<<endl;
    }
};

class derived: public base
{
    public:
    int var_derived = 45;
    void display()  
    {
        cout<<"This is from Base class:"<<var_base<<endl;
        cout<<"This is from Derived class:"<<var_derived<<endl;
    }
};

int main()
{
    base *base_class_pointer;       //Base class ko pointer
    base obj_base;                  //Object of base class
    derived obj_derived;            //Object of Derived class
    base_class_pointer = &obj_derived;  //Base class pointer pointing to the derived class
    base_class_pointer->display();  //Will acess to the derived class coz base one is virtual
    return 0;
}