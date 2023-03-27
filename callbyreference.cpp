/* Call by reference (using pointer)
    Exchange matra haina swap nai garxa due to the address provided
    value matra haina ki pura variables (memory) nai transfer hunxa so
*/
#include<iostream>
using namespace std;

void swap(int &a, int &b ) 
{       
    int temp;               
    temp = a;               
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 9;
    cout<<"Before Swap:"<<endl;
    cout<<"The value of x is:"<<x<<" and y is:"<<y<<endl;

    swap(x,y); 
    cout<<"After Swap:"<<endl;
    cout<<"The value of x is:"<<x<<" and y is:"<<y<<endl;
    return 0;
}
