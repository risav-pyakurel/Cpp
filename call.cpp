/* Return by variable:
Value ko through bata return garne 

#include<iostream>
using namespace std;

int returnvalue(int a)
{
    a = 45;
    return a;
}

int main()
{
    int x;
    cout<<returnvalue(x)<<endl;
}
*/

/* Return by reference (pointers)
    reference variable ko help bata
*/
#include<iostream>
using namespace std;

int &max(int &x , int &y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main()
{
    int a = 6;
    int b = 4;
    max(a , b);
    cout<<"The maximum value is:"<<max(a,b)<<endl;
}