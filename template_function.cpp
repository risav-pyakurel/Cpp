#include<iostream>
using namespace std;

template <class T>
int swap(T &x,T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
void fun(int a,int b)
{
    cout<<"Before Swap:"<<endl;
    cout<<a<<" and "<<b<<endl;

    swap(a,b);
    cout<<"After Swap:"<<endl;
    cout<<a<<" and "<<b<<endl;
}

int main()
{
    fun(100,200);
    return 0;
}
