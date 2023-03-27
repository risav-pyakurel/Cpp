//  Arrays in cpp and the use of pointers in it
#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int arr[4] = {12 , 45, 99, 35};
    for(i=0;i<4;i++)
    {
        cout<<"The value of the marks are:"<<arr[i]<<endl; 
    }
    // doesn't need the ampersand to denote the array like other integers.
    int* p = arr;
    cout<<"The value of *p is:"<<*p<<endl;
    cout<<"The value of *(p+1) is:"<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is:"<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is:"<<*(p+3)<<endl;
    
    return 0;
}