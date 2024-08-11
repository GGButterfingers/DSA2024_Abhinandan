// Without using mod operator give remainder using while loop

#include<iostream>
using namespace std;

int main()
{
    int dividend;
    int divisor;

    int quo;
    int rem;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    rem = dividend;
    quo = 0;

    //Using while loop knowing the remainder
    while(rem >= divisor)
    {
        rem -= divisor;
        quo += 1;
    }

    cout << "After dividing Remainder: " << rem << " Quotient: " << quo << endl;
    return 0;
}