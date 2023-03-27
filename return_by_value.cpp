//It is also same as the pass by value 
//It means it deals with the values of the variables only.

#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return (a+b);
}
int main()
{
    int m,n;
    cout<<"Enter the values to find the sum:"<<endl;
    cin>>m>>n;
    sum(m,n);
    cout<<"The sum of "<<m<<" and "<<n<<" is "<<sum(m,n)<<endl;
    return 0;
}