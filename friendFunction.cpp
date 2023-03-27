/* Friend function:helps to use private data members of any class by external members
*/

#include<iostream>
using namespace std;

class sample
{
    int a;
    int b;
    
    public:
    void setdata(int x,int y)
    {
        a = x;
        b = y;
    }
    friend float mean(sample s);
};

float mean(sample s)
{
    return float(s.a+s.b)/2;
}

int main()
{
    sample p;
    p.setdata(40,13);
    cout<<"Therefore the mean is:"<<mean(p)<<endl;
    return 0;
}