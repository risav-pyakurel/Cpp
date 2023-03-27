/* Array of objects using pointers */
#include<iostream>
using namespace std;

class mall
{
    int id;
    float price;

    public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout<<"Code of item is"<<id<<endl;
        cout<<"Price is"<<price<<endl;
    }
};

int main()
{
    int size = 3;
    mall *ptr = new mall[size];
    int p,i;
    float q;
    for(i=0;i<size;i++)
    {
        cout<<"Enter ID and price:"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        (ptr+i);
    }
    for(i=0;i<size;i++)
    {
        cout<<"Item Number:"<<i+1<<endl;
        ptr->getdata();
        ptr++;

    }
    return 0;
}