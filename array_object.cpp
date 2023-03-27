/* We can use array as objects incase the number of objects are more or large
*/

#include<iostream>
using namespace std;

class school
{
    private:
    int roll;
    
    public:
    void getdata(void)
    {
        cout<<"Enter your roll number :"<<endl;
        cin>>roll;
    }
    void display(void)
    {
        cout<<"Your roll number is "<<roll<<endl;
    }

};

int main()
{
    int i,n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    school ips[n];      // use of array as an object
    for(i=0;i<n;i++)
    {
        ips[i].getdata();
        ips[i].display();
    }
    return 0;
}