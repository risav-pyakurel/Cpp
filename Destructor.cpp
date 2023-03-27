/* Used to destroy objects that have been created by a constructor
    same name as class but uses tilde(~)sign in front of it
    uses no argument and return type
    last ma create vako paile destruct hunxa and so on
*/
 
#include<iostream>
using namespace std;
int count = 0;  //Global variable

class destruct
{
    public:
    destruct()  // Default Constructor
    {
        count++;
        cout<<"Constructor creates object number:"<<count<<endl;
    }

    ~destruct()// Destructor declared and defined
    {
        cout<<"Destructor destroys object number:"<<count<<endl;
        count--;

    }
};

int main()
{
    destruct d1,d2,d3;  // Default constructor used so just called
    return 0;
}