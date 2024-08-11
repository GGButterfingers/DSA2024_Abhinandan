//Given a sorted array A (ascending) and x an element, determine whether x belongs to the Array

/*CONDITIONS
1. If x belongs to Array, determine the rightmost occurence of x in the Array
2. Do not use recursion
*/

#include <iostream>
#include <algorithm>
#include <cmath> // for ceil function

using namespace std;

int main()
{
    int n;
    int x;
    
    // Taking input for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    
    // Taking input for the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sorting the array
    sort(arr, arr + n);  

    cout << "Enter the element to be searched:" << endl;
    cin >> x;

    //Doing binary Search

    int left = 0;
    int right = n-1;

    int middle;


    //Without using ceil function

    /*while(left <= right)
    {
        middle = (left + right)/2;      //left<=middle<right   
        if(arr[middle] > x)
            right = middle-1;
        else if(arr[middle] < x)
            left = middle+1;
        else
        {
            if(middle < right && arr[middle+ 1] == x)
                left = middle + 1;
            else 
                break;
        }
    }

    if(arr[middle] == x)
        cout << middle <<endl;
    else
        cout << -1 << endl;*/


    // Using ceil function
    
   while(left != right)
   {
        cout << "left: " << left << " " << "right: " << right << " ";
        middle = static_cast<int>(ceil((left + right)/2.0));    //left<middle<=right  //Gives you the rightmost occurence of the element
        cout << "middle: " << middle << endl;
        if(arr[middle] > x)                               
            right = middle-1;
        else
            left = middle;
   }

    cout << "left: " << left << " " << "right: " << right << endl;

    if(arr[left] == x)                           
        cout << left << endl;                              
    else
        cout << -1 << endl;

    return 0;
}