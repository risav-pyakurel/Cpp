/*Return by reference vaneko same as the pass by variable ho
In this too the memory address or les's say actual variable is used along with the values.  */
#include<iostream>
using namespace std;

int& max(int &a,int &b)
{
    if(a>b)
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
    max(x,y);
    cout<<"The maximum number is:"<<max(x,y)<<endl;
    return 0;
}