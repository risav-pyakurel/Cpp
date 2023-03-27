// Using same function for more than one use:
/*
#include<iostream>
#define pi 3.14
using namespace std;

// For Cube:
float volume(int a)
{
    return (a*a*a);
}

//For Cuboid:
float volume(int l, int b, int h)
{
    return (l*b*h);
}

//For Cylinder:
float volume(int r, int h)
{
    return (pi*r*r*h);
}

int main()
{
    cout<<"The volume of cube is:"<<volume(6)<<endl;
    cout<<"The volume of cuboid is:"<<volume(4,5,6)<<endl;
    cout<<"The volume of cylinder is:"<<volume(7,12);

}

*/
#include<iostream>
using namespace std;

void display(int i)
{
    cout<<"This is int type:"<<i<<endl;
}

void display(double f)
{
    cout<<"This is float type:"<<f<<endl;
}

void display(char c)
{
    cout<<"This is character type:"<<c<<endl;
}

int main()
{
    display(45);
    display(45.25);
    display('S');
    return 0;
}
