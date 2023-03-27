/* Inheritance means to transfer some property of a parent to its offspring
In OOP it is used to enhance the feature of reusability 
We use the properties of the exitisting class and then inherit to other classes
The existing class is called Base class and the inherited class is the derived class

Derived Class Syntax:
class {{Derived_Class_Name}} : {{Visibility_mode}} {{Base_class_name}}
visibility mode means to choose whether to inherit from private(by default) or public or protected
*Public visibility mode--> public members of base class become public members of derived class
*Private visibility mode--> public members of base class become private members of derived class
Private members of the base class cannot be inheritied.
Protected members means those private members which are private but we need to inherit them
Sample for inheritance;
#include<iostream>
using namespace std;

class hero
{
    member functions;
};

class heroine: public hero      /Public Derivation/
{
    member functions
};

class villian:hero      / Private Derivation as default/
{
    member functions;
}
*/