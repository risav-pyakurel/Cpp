//Namespace can also be used when the local member functions and variables are same
#include<iostream>
#include<string>
using namespace std;

namespace digit
{
    int count=0;
}

namespace character
{
    int count=0;
}

namespace others
{
    int count=0;
}

int main()
{
    char str[]="sachinkdk23@gmail.com";
    int i = 0;
    while(str[i]!='\0')
    {
        if(isdigit(str[i]))
        {
            digit::count++;
        }

        else if(isalpha(str[i]))
        {
            character::count++;
        }
        else
        {
            others::count++;
        }
        i++;
    }
    cout<<"The number of digits = "<<digit::count<<endl;
    cout<<"The number of charcters = "<<character::count<<endl;
    cout<<"The number of others = "<<others::count<<endl;
    return 0;

}