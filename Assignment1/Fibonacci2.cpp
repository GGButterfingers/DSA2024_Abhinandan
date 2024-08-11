//Given n>0, determine the largest fibonacci number less than n.
//Assume we have infinite sequence of Fibonacci numbers in an array.

/*
    F3 is the current Fibonacci number
    F2 is the immediate predecessor to the current
    F1 is the next immediate predecessor to the current 
*/

#include<iostream>
#include <cmath> // for ceil function
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
    int search;

    cout << "Enter the number of Fibonacci elements to be atleast present: " << endl;
    cin >> n;

    vector<int> Fib_vector(n,0);
    generate_fib(Fib_vector);

    for(int i=0; i<Fib_vector.size(); i++)
    {
        cout << Fib_vector[i] << " ";
    }

    cout << endl;
    cout << "Enter the number to be searched: " << endl;
    cin >> search;

    //Doing Binary Search
    int left = 0;
    int right = Fib_vector.size()-1;
    int middle;

    while(left<=right)
    {
        middle = static_cast<int>(ceil((left + right)/2.0));    //left<middle<=right  //Ceil gives you the rightmost occurence of the element
        if(Fib_vector[middle] > search)
            right = middle-1;
        else if(Fib_vector[middle] < search)
            left = middle+1;
        else
        {
            middle = middle-1;      //since middle will give you the number just greater than or equal to given element 
            break;                  //print the previous Fibonacci number
        }
    }

    cout << "Fibonacci number less than " << search << ": " << Fib_vector[middle] << endl;

    return 0;
}