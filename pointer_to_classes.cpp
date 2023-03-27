/* pointers to access member functions as an objects and arro operator (->) */
#include<iostream>
using namespace std;

class number
{
    int a;
    int b;

    public:
    void setdata(int x,int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout<<"The corresponding values are "<<a<<" and "<<b<<endl; 
        cout<<"Thus the sum is:"<<(a+b)<<endl;
    }
};

int main()
{
    //number N;
   // number *ptr = &N; (Pointer to access the member function)
    //can also be written as:
    number *ptr = new number;
    //(*ptr).setdata(5,10); {is same as:}
    ptr->setdata(5,10); //This is called arrow operator used by pointer to point to the member function
    //(*ptr).getdata()  [is also same to the following]
   ptr->getdata();
    return 0;
}