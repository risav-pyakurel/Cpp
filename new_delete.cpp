/*New and Delete keywords are used in dma for c++*/
//Basics

#include<iostream>
using namespace std;

int main()
{
    int *p = new int(20);
    cout<<"The value at address p is:"<<*(p)<<endl;
    delete p;
    float *q = new float(20.95);
    cout<<"The value at address q is:"<<*(q)<<endl;
    delete q;
    int *r = new int[3];
    r[0] = 1;
    r[1] = 2;
    *(r+2) = 3;
    cout<<"The value at address r(0) is:"<<r[0]<<endl;
    cout<<"The value at address r(1) is:"<<r[1]<<endl;
    cout<<"The value at address r(2) is:"<<r[2]<<endl;
    delete [] r;
}