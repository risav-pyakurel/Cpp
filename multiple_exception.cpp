//There might be one or more condtion to throw an exception
#include<iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x==1)
        {
            throw x;    //Int
        }
        else if(x==0)
        {
            throw 'x';  //Char
        }
        else if(x==-1)
        {
            throw 1;    //Double
        }
    }
    catch(char c)   //Catch 1
    {
        cout<<"Caught a Character:"<<endl;
    }
    catch(int m)        //Catch 2
    {
        cout<<"Caught an Integer:"<<endl;
    }
    catch(double d)        //Catch 2
    {
        cout<<"Caught an Double:"<<endl;
    }
    cout<<"End of try catch system:"<<endl;
}
int main()
{
    cout<<"Testing multiple Catches:"<<endl;
    cout<<"x = 1"<<endl;
    test(1);

    cout<<"x = 0"<<endl;
    test(0);

    cout<<"x = -1"<<endl;
    test(-1);

    cout<<"x = 2"<<endl;
    test(2);
}