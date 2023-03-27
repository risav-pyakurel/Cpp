/* Inline Function:
Combination of function callng and macros.
Used to cut the cost of function calling
Must be defined before the call
an inline function is expanded in the line when it is called or invoked
i.e, the compiler replaces the function call with corresponding function code

#syntax:    inline return_type function_name(argument list);

Advantages:
1) Execution of the program becomes faster
2)Better checking than the macros.
3)Can acess members of the class which is not possile in the case of macros

Disadvantages:
1)If function is called regularly(repeatedly) then, object code increases thus increasing memory size
2)Compiler cannot perform inlining if the function is complex or complicated
3)Compiler cannot perform inlining if it contains loops or recursive attributes.

Not to use:
when loop, switch ,goto is present
function with no return value
if static variable is present
inline func are recursive
*/

#include<iostream>
using namespace std;

inline int process(int a, int b)
{
    return a*b;
}

int main()
{
    int x,y;
    cout<<"Enter the value of x and y:"<<endl;
    cin>>x>>y;
    process(x , y);
    cout<<"The product is:"<<process(x,y)<<endl;
}



