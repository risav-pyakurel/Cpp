#include<iostream>
using namespace std;

void swap(int *a,int *b)
{       
    int temp;               
    temp = *a;               
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 9;
    cout<<"Before Swap:"<<endl;
    cout<<"The value of x is:"<<x<<" and y is:"<<y<<endl;

    swap(&x,&y); 
    cout<<"After Swap:"<<endl;
    cout<<"The value of x is:"<<x<<" and y is:"<<y<<endl;
    return 0;
}
