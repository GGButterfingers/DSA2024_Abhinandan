// Verify that GCD(Fm ,Fn)=FGCD(m,n),` where Fn is the (n+1)th Fibonacci number. 
// What is the minimum number of cases to verify in order to build confidence? 
// Can this confidence be quantified with probability?


#include<iostream>
#include<vector>

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
    int size;
    cout << "Enter the number of Fibonacci to be present atleast: " << endl;
    cin >> size;

    vector<int> Fib_vector(size,0);
    generate_fib(Fib_vector);

    // Verify that GCD(Fm ,Fn)=FGCD(m,n)
    int m;
    int n;

    cout << "Enter two numbers less than size: ";
    cin >> m >> n;

    if(GCD(Fib_vector[m-1], Fib_vector[n-1])==Fib_vector[GCD(m,n)-1])
        cout << "The hypothesis is correct";
    else
        cout << "The hypothesis failed for these numbers";

    return 0;
}