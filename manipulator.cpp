/*  Manipulators: Used to format display results.
used after insertion symbol (<<) i.e, it is used with cout function.
it is capable of modifying,format,manipulating data display
should be defined in iomanip but the endl can be defined in the iostream
    **Types of manipulators are endl, setw, setprecision
endl :: Functions as \n in C ie, to display text in new line
setw :: It is meant to be shifting the display data in right and provides the field width
setprecision :: Is used for the float type data to display the data precisely
*/
#include<iostream>
#include<iomanip> // i/o manipulator
using namespace std;

int main()
{
    int a=12;
    float b = 12.45;
    char c = 's';

    cout<<"Before setw:"<<endl;
    cout<<"a represents:"<<a<<endl;
    cout<<"b represents:"<<b<<endl;
    cout<<"c represents:"<<c<<endl;

    cout<<"After setw:"<<endl;
    cout<<"a represents:"<<setw(7)<<a<<endl;
    cout<<"b represents:"<<setw(7)<<b<<endl;
    cout<<"c represents:"<<setw(7)<<c<<endl;
    return 0;
}
