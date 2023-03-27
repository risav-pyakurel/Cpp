#include<iostream>
using namespace std;

void divide(int x,int y,int z)
{
    cout<<"We are inside the function:"<<endl;
    if((x-y)!=0)    //If ok
    {
        int r = z/(x-y);
        cout<<"Result is "<<r<<endl;
    }
    else        //Problem if occured
    {
        throw(x-y); //Throw point
    }
}
int main()
{
    try
    {
        cout<<"We are inside the try function!"<<endl;
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
       cout<<"Exception found!"<<endl;
    }
    return 0;
}