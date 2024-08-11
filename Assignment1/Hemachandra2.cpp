// By the 12th-century Indian mathematician Hemachandra, 
// it is well-known that the Fibonacci sequence represents the number of ways one can express a number as the sum of 1s and 2s.

// Develop an iterative algorithm to achieve the same goal

#include<iostream>
using namespace std;

//Function that generates number of ways one can express a number as the sum of 1s and 2s.
int Num_ways(int n)
{

    int F0 = 1;
    int F1 = 1;
    if(n==0 || n==1)
        return 1;
    int F2;
    int i=2;  //i denotes ith index Fibonacci number
    while(i <= n)
    {
        F2 = F1 + F0;
        F0 = F1;
        F1 = F2;
        i++;
    }

    return F2;

}


int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of ways one can express " << n << " as the sum of 1s and 2s is: " << Num_ways(n) << endl;

    return 0;
}