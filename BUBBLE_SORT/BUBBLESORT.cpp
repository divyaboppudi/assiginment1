//Code for bubble sort
// Using the input-output stream library

#include <iostream> 

         //Using the standard namespace for convenience
using namespace std;

// The main function is the program's entrance point.
int main()
{

    // initializing an array of integers
    int a[] = { 24,12,35,23,45,34,20,48 };

    //The array's length is determined by dividing its overall size by the size of each individual element.
    int getArrayLength = sizeof(a) / sizeof(int);

    // Iterating through the items of the array, applying an outer loop to each element
    for (int i = 0; i < getArrayLength; i++)//up unitl the length
    {
        //Nested loop that compares nearby components and swaps them if necessary.  
        for (int j = 0; j < getArrayLength - 1; j++) {//up until last but one
             //Checking whether the current element is greater than the next element.
            if (a[j] > a[j + 1])
            {
                //Changing the components in case the condition is met
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //Putting the sorted array to print
    for (int i = 0; i < getArrayLength; i++) {
        cout << a[i] << "\t";
        return 0;
    }
}