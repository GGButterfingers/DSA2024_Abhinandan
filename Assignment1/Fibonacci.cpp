//Given n>0, determine the largest fibonacci number less than n using iterative approach
/*
    F3 is the current Fibonacci number
    F2 is the immediate predecessor to the current
    F1 is the next immediate predecessor to the current 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number greater than zero: ";
    cin >> n;

    if(n <= 0)
    {
        cerr << "Invalid number" << endl;
        return 0;
    }

    int F1 = 1;
    int F2 = 1;
    int F3;

    while(F2 <= n)
    {
        F3 = F1 + F2;
        F1 = F2;
        F2 = F3;
    }

    cout << "The largest fibonacci number less than or equal to " << n << " is " << F1 << endl;
}