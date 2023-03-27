// To use the content of global variable use scope resoln operator (::)
#include<iostream>
using namespace std;

int c=48;       //Global Variable

int main()
{
    int a , b;  //Local Variables
    int c;

    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    c = a+b;

    cout<<"The value of c is:"<<c<<endl;
    cout<<"The value of c in global way is:"<<::c<<endl;
    return 0;

}