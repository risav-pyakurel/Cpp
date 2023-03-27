/* Wap to create a teacher with data members tid and subject and ember functions for reading and displaying
data members,
Create another class staff with data members sid and position,and member function for reading and displaying
data members,
Derive a class co-ordinator from Teacher and Staff and class must have its own data member department
and member functions for reading and displaying data members
Create two object of co-ordinator class and read and dsiplay their results.*/

#include<iostream>
using namespace std;
class teacher
{
    int tid;    // teacher's id number
    char subject[20];

    public:
    void getdata_teacher()
    {
        cout<<"Enter your teacher's Id number:"<<endl;
        cin>>tid;
        cout<<"Enter the subject you teach:"<<endl;
        cin>>subject;
    }
    void displaydata_teacher()
    {
        cout<<"Teachers ID:"<<tid<<endl;
        cout<<"Subject:"<<subject<<endl;
    }
};
class staff
{
    int sid;    //staff id number
    char position[20];

    public:
    void getdata_staff()
    {
        cout<<"Enter your staff's Id number:"<<endl;
        cin>>sid;
        cout<<"Enter your position:"<<endl;
        cin>>position;
    }
    void displaydata_staff()
    {
        cout<<"Staff's ID:"<<sid<<endl;
        cout<<"Position:"<<position<<endl;
    }
};
class CoOrdinator : public teacher,public staff
{
    char department[20];

    public:
    void getdata_CoOrdinator()
    {
        cout<<"Enter your Department:"<<endl;
        cin>>department;
    }
    void display_CoOrdinator()
    {
        cout<<"Department:"<<department<<endl;
    }

};

int main()
{
    CoOrdinator c1,c2;
    c1.getdata_teacher();
    c1.displaydata_teacher();
    c1.getdata_staff();
    c1.displaydata_staff();
    c1.getdata_CoOrdinator();
    c1.display_CoOrdinator();
    c2.getdata_teacher();
    c2.displaydata_teacher();
    c2.getdata_staff();
    c2.displaydata_staff();
    c2.getdata_CoOrdinator();
    c2.display_CoOrdinator();
    return 0;

}