/*


//REFERENCE VARIABLES
// pailai use vako function or variable lai same value dinu next variable lai
#include<iostream>
using namespace std;

int main()
{
    int m =7;
    int &n = m;

    cout<<"The value of m is:"<<m<<endl;
    cout<<"The value of n is:"<<n<<endl;
    n++;
    cout<<"The value of m is:"<<m<<endl;
    cout<<"The value of n is:"<<n<<endl;

    return 0;
}

*/

#include<iostream>
using namespace std;

void getdata(int &a) // a is the reference
{
    a ++;
}

int main()
{
    int b = 107;
    getdata(b);
    cout<<"The value of b is:"<<b<<endl;
    return 0;
}