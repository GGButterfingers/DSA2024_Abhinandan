// Compare the working of Interpolation Search and Binary Search by 
// running them over a dataset of 1 million points or more.


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Bin_Search(vector<int> &arr, int x)
{
    int left = 0;
    int right = arr.size()-1;
    int middle;
    while(left <= right)
    {
        middle = (left + right)/2;      //left<=middle<right   
        if(arr[middle] > x)
            right = middle-1;
        else if(arr[middle] < x)
            left = middle+1;
        else 
            break;
    }

    if(arr[middle] == x)
        cout << middle <<endl;
    else
        cout << -1 << endl;
}
void Int_Search(vector<int> &lin_vector, int element){

    long int left = 0;
    long int right = lin_vector.size()-1;
    long int middle;

    while(left != right && lin_vector[left] != lin_vector[right])
    {
        cout << "left: " << left << "Right: " << right;
        middle = left + static_cast<int>(ceil((right - left)*(element - lin_vector[left])/(lin_vector[right]-lin_vector[left]))); //left<=middle<right
        cout << "middle: " << middle << endl;;
        if (lin_vector[middle] > element){
            right = middle-1;
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
}

int main()
{
    int element;
    vector<int> lin_vector(1000000);

    for(int i=0; i<1000000;i++)
    {
        lin_vector[i] = i;
    }

    cout << "Enter the element to be searched (<1000000): ";
    cin >> element;

    // Start timer
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    Bin_Search(lin_vector, element);

    // Stop timer
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Print the time taken
    printf("Time taken for Binary Search %f seconds\n", cpu_time_used);

    // Start timer
    start = clock();

    Int_Search(lin_vector, element);

    // Stop timer
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Print the time taken
    printf("Time taken for Interpolation Search %f seconds\n", cpu_time_used);


}