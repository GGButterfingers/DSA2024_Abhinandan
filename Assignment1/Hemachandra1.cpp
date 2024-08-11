// By the 12th-century Indian mathematician Hemachandra, 
// it is well-known that the Fibonacci sequence represents the number of ways one can express a number as the sum of 1s and 2s.
// Provide a recursive algorithm to enumerate all possible ways of expressing a given number N as a sum of 1s and 2s.

#include<iostream>
using namespace std;

//Function that generates number of ways one can express a number as the sum of 1s and 2s.
int Num_ways(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return Num_ways(n-1) + Num_ways(n-2); 
}


int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of ways one can express " << n << " as the sum of 1s and 2s is: " << Num_ways(n) << endl;
}