/* (2)Hybrid Multipath Inheritance:
It is used when eeuta main base class bata derive vako 2 oota class use garera next class banauda 
double up hunxa dubai ko member fucntion that creates the confusion to the complier so this needs to
be addressed and is addressed using virtual base classes */
#include<iostream>
using namespace std;

class patients
{
    protected:
    char name[20];
    int patientId;

    public:
    void getdata()
    {
        cout<<"Enter Your Name:"<<endl;
        cin>>name;
        cout<<"Your patient id please:"<<endl;
        cin>>patientId;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Patient ID:"<<patientId<<endl;
    }
};

class cancer : virtual public patients
{
    protected:
    int roomNo;

    public:
    void getdata()
    {
        cout<<"What is your room number?"<<endl;
        cin>>roomNo;
    }
    void display()
    {
        cout<<"Room No:"<<roomNo;
    }
};

class aasthma : virtual public patients
{
    protected:
    int bedNo;

    public:
    void getdata()
    {
        cout<<"In which bed are you staying?"<<endl;
        cin>>bedNo;
    }
};

class infants : public cancer, public aasthma
{
    int number;

    public:
    void getdata()
    {
        patients:: getdata();
        cancer::getdata();
        aasthma :: getdata();
        cout<<"How long have you been here?"<<endl;
        cin>>number;
    }

    void display()
    {
        patients::display();
        cancer :: display();
        aasthma :: display();
        cout<<"Stayed For:"<<number<<endl;
    }
};

int main()
{
    infants i1;
    i1.getdata();
    i1.display();
    return 0;
}