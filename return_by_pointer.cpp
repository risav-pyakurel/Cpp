#include<iostream>
using namespace std;

int *max(int *a,int *b)
{
    if(*a>*b)
    {
        return a;   //Return of the value
    }
    else
    {
        return b;   //Return of the value
    }
}

int main()
{
    int x,y;
    cout<<"Enter the values for comparison:"<<endl;
    cin>>x>>y;
    int *S = max(&x,&y);
    cout<<"The maximum number is:"<<*S<<endl;
    return 0;
}