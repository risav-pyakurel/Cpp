/* get and put is used in C++ reading and displaying the single character set value
Syntax:
char c;
cin.get(c);        or, c = cin.get();
cout.put(c);           */

#include <istream>
#include <iostream>
#include <ostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a letter Please!:" << endl;
    cin.get(c);
    cout.put(c);
}
