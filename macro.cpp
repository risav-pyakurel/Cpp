/*Function call can be costly in terms of memory so the macro a special feature in the 
oop is used to minimize the cost of fucntion call   
#Limitation vaneko when it is called as mul(4+3,4)
it returns value as (4+3*4) == 16    instead of*(7,4) == 7*8 = 28 */

#include<iostream>
#define mul(a,b)a*b     //Macro Defination
#define div(a,b)a/b     //Macro Defination
using namespace std;
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter the integer value of:"<<endl;
    cin>>a>>b;
    cout<<"Enter the float values of:"<<endl;
    cin>>x>>y;
    cout<<"The muliplication value is:"<<mul(a,b)<<endl;    //Macro Called
    cout<<"The division value is:"<<div(x,y)<<endl;         //Macro Called
    return 0;
}