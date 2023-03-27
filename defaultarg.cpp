/* Default Argument :
     pailai present hune parameter inside the fuction
If parameters are passed then same values will be used else 
the default values will be used.

#To determine weight
#include<iostream>
using namespace std;

float weight(int mass,float g= 9.80)    //Default arg (g=9.8)
{
    return mass*g;
}

int main()
{
    int M;
    cout<<"Enter the value of mass:"<<endl;
    cin>>M;
    cout<<"Your weight is:"<<weight(M)<<endl;
    cout<<"In polar region:"<<endl;
    cout<<"Your weight will be:"<<weight(M,10)<<endl;
}
*/

#include<iostream>
using namespace std;

float intrest(int Principal,float rate=0.1,int time=4)
{
    return Principal*rate*time;
}

int main()
{
    int p;
    cout<<"Enter the sum to deposit:"<<endl;
    cin>>p;
    cout<<"The value of i for "<<p<< " is:"<<intrest(p)<<endl;
    cout<<"For VIP:"<<endl<<"The value of I for "<<p<<" is :"<<intrest(p,0.2);
} 
