/* Base class pointer can point the object of the derived class.
but, if we call the member function of the baseclass then it calls the function of base class itself
not that of derived becoz it is the pointer of the base class.
This process is called late binding.

Also the base class pointer cannot be pointed to the data member of derived class 
It can only access the data members inherited to the derived class
*/

#include<iostream>
using namespace std;

class base
{
    public:
    int var_base;
    void display()      
    {
        cout<<"This is from Base class:"<<var_base<<endl;
    }
};

class derived: public base
{
    public:
    int var_derived;
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
    base_class_pointer->var_base = 55;   //Passing the value to the base class variable
    base_class_pointer->display();      //Calls the function of base class

   // base_class_pointer->var_derived= 55;  
   //cannot be run coz. it can only run the inheited one and var_der is not inherited

   derived *derived_class_pointer;      //Pointer of derived class
   derived_class_pointer = &obj_derived;    //Derived class pointer pointing to the derived class object
   derived_class_pointer->var_base = 25;    //Derived class pointer assigning to the base class variable(inherited)
   derived_class_pointer->var_derived=45;   //Derived class pointer assigning to the base class variable
    derived_class_pointer->display();
    return 0;    
}
