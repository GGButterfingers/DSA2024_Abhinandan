//Determine the number of function calls happen while printing sequence of N Fibonacci numbers using recursion
//

#include<iostream>
using namespace std;



void Fn_calls(int &count, int n)
{
    count++;
    if(n==1 || n==0)
        return;
    else
    {
        Fn_calls(count, n-1);
        Fn_calls(count, n-2);
    }

}

int main()
{
    int n;
    cout << "Enter the number of elements to be printed: ";
    cin >> n;


    int count = 0;
    Fn_calls(count, n);

    cout << "The number of function calls are: " << count << endl;

}