/*Exception Handling:
There are two types of the errors present in any program
i.e, either logical: error due to fault of the programmer
or, syntax : error due to fault by programmer rellating to the concept of programming language
>>Rest of the peculiar errors seen or observed in the program are called as the exceptions.
This may arise due to dividing by 0, memory space running out or access to array outside bound

#Purpose involved in the Exception Handling::
1)Find the problem (Hit the exception).
2)Inform that there is error(Throw an exception)
3)Receive the error information(Catch an exception)
4)Take corrective decision(Handle an exception)

TRY(The keyword TRY is used to preface a block of statements that a block of statements may contain exception)
THROW(When an exception is detected in the block of statements,it is thrown using throw statements as notified by try)
CATCH(The thrown exception is catched with the help of catch statement)
something new added by suds
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the values of a and b:" << endl;
    cin >> a >> b;
    int x = a - b;

    try
    {
        if (x != 0)
        {
            cout << "Result(a/x) is equal to:" << a / x << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception Caught: x = "<<x<<endl;
    }
    cout<<"END"<<endl;
    return 0;
}
