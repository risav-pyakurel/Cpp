// Inheritance in which we derive the class from already derived class:
// A------> B------>C       or, GrandParent ------> Parent -----> Child

#include<iostream>
using namespace std;

class Student       // base class(grand father)
{
    int rollNo;
    char name[20];

    public:
    void getstudent()
    {
        cout<<"Enter your roll number:"<<endl;
        cin>>rollNo;
        cout<<"Enter your name:"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"Roll Number:"<<rollNo<<endl;
        cout<<"Name:"<<name<<endl;
    }
};

class marks : public Student // Derived Publically from base class(Father)
{
    int sub[5];

    public:
    int i;
    int t = 0;
    void getmarks()
    {
        cout<<"Enter your marks:"<<endl;
        for(i =0 ;i<5;i++)
        {
            cin>>sub[i];
        }
    }
    void displaymarks()
    {
        cout<<"Marks:"<<endl;
        for(i =0 ;i<5;i++)
        {
            cout<<" "<<sub[i]<<endl;
        }
    }
    int total()
    {
        for(i =0 ;i<5;i++)
        {
            t = t + sub[i];
        }
        return t;
    }
};

class result : public marks
{
    float totalmarks,percentage;

    public:
    void getdata()
    {
        getstudent();
        getmarks();
    }

    void displaydata()
    {
        display();
        displaymarks();
        totalmarks = total();
        percentage = totalmarks/5;
        cout<<"Total Marks:"<<totalmarks<<endl;
        cout<<"Your percentage is:"<<percentage<<endl;
    }
};

int main()
{
    result r;
    r.getdata();
    cout<<endl;
    cout<<"Progress Card"<<endl;
    cout<<endl;
    r.displaydata();
    return 0;
}

