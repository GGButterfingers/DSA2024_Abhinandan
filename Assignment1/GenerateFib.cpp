// Write a code to generate the Fibonacci sequence until a user-specified limit.0

#include<iostream>
#include <vector>

using namespace std;

//A function that generates Fibonacci sequence
void generate_fib(vector<int> &Fib_vector)
{
    Fib_vector[0] = 1;
    Fib_vector[1] = 1;
    int size = Fib_vector.size();
    for(int i=2; i<size; i++)
    {
        Fib_vector[i] = Fib_vector[i-1] + Fib_vector[i-2];
    }
}

int main()
{
    int n;
    cout << "Enter the number of Fibonacci to be present atleast: " << endl;
    cin >> n;

    vector<int> Fib_vector(n,0);
    generate_fib(Fib_vector);

    cout << "Printing First " << n << " Fibonacci numbers." << endl;
    for(int i=0; i<Fib_vector.size(); i++)
    {
        cout << Fib_vector[i] << " ";
    }

    return 0;
}