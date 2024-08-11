// (Interpolation Search) Assuming that the given list of numbers are growing linearly, 
// perform an efficient “jump-based” search (similar to the binary search except that the choice of m is based on the linear growth of the data). 


#include<iostream>
#include <algorithm>
#include <cmath>
#include<vector>

using namespace std;

//A function that generates linear sequence
void generate_lin_seq(vector<int> &lin_vector, int &m , int &intcpt, int size)
{
    int i=0;
    while(i<size)
    {
        // lin_vector.push_back(m*rand()%100 + intcpt);
        lin_vector.push_back(i);

        i++;
    }

    sort(lin_vector.begin(), lin_vector.end());

    cout << "Displaying elements: " << endl;

    for(int i=0; i<size; i++)
    {
        cout << lin_vector[i] << " ";
    }

    cout << endl;
}


int main()
{
    int m;
    int n;
    int intcpt;
    int element;

    vector<int> lin_vector;

    cout << "Enter the number linear elements required: ";
    cin >> n;

    cout << "Enter the slope: ";
    cin >>  m;

    cout << "Enter the intercept: ";
    cin >> intcpt;

    generate_lin_seq(lin_vector, m, intcpt, n);

    //Algorithm for Interpolation Search
    cout << "Enter the element to be searched(0-99): ";
    cin >> element;

    int left = 0;
    int right = n-1;
    int middle;

    while(left != right && lin_vector[left] != lin_vector[right])
    {
        cout << "left: " << left << "Right: " << right;
        middle = left + static_cast<int>(ceil((right - left)*(element - lin_vector[left])/(lin_vector[right]-lin_vector[left]))); //left<=middle<right
        cout << "middle: " << middle << endl;;
        if (lin_vector[middle] > element){
            right = middle;
        }
        else if(lin_vector[middle] < element){
            left = middle+1;
        }
        else 
            break;
    }   

    if(lin_vector[middle] == element)
        cout << "Element is found at: " << middle << " index" << endl;
    else 
        cout << -1;

    return 0;
}