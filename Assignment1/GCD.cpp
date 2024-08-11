// Give two positive integers m and n, determine the GCD(m,n).


#include<iostream>
using namespace std;

int GCD(int m, int n)
{
    if(m==0)
        return n;
    else if(n==0)
        return m;
    else
        return GCD(abs(m-n), min(m,n));
}

int main()
{
    int m,n;

    cout << "Enter two numbers to find GCD: ";
    cin >> m >> n;

    cout << endl << "GCD of " << m << " and " << n << " is: " << GCD(m,n) << endl; 
}