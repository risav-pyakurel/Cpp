/*Nesting of Member Function
    this means to use one member function inside another member function
*/

#include<iostream>
using namespace std;

class maximum
{
    private:
    int a,b;

    public:
    void getdata(void);
    int largest(void);
    void display(void);

};

void maximum :: getdata()
{
    cout<<"enter the  values to compare:"<<endl;
    cin>>a>>b;
}

int maximum :: largest()
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

void maximum :: display()
{
    cout<<"The largest number is:"<<largest()<<endl;  // nesting largest member function in display.
}

int main()
{
    maximum p;
    p.getdata();
    p.display();
    return 0;
}




