/* Functions used as object argument
*/

#include<iostream>
using namespace std;

class Distance
{
    private:
    int km;
    int m;
//use &x and &y 
    public:
    void getdata(int a, int b)
    {
        km = a;      
        m = b;
    }

    void total(Distance trip1, Distance trip2)
    {
        km = trip1.km + trip2.km;
        m = trip1.m + trip2.m;
        km = km+m/1000;
        m = m%1000;
       
    }

    void print(void)
    {
        cout<<"The distance covered is : "<<km<<" km "<<" and "<<m<<" m."<<endl;
    }

};

int main()
{
    Distance d1,d2,d3;
    d1.getdata(4,450);
    d1.print();
    d2.getdata(7,855);
    d2.print();

    d3.total(d1,d2);  // function used as obj argument
    d3.print();
    return 0;
}