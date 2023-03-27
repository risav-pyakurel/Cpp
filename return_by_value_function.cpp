#include<iostream>
using namespace std;

class complex
{
    int real,imag;
     
    public:
    void getdata()
    {
        cout<<"Enter the values of the real and imaginary part:"<<endl;
        cin>>real>>imag;
    }

    void display()
    {
        cout<<"("<<real<<"+"<<imag<<"i"<<")"<<endl;
    }
    complex addComplex(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c2.addComplex(c1);
    cout<<"Addition is equal to:";
    c3.display();
    return 0;
}