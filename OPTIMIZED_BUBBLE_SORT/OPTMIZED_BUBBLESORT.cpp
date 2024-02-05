//code for optimized bubble sort
//Include the input-output stream library.
#include <iostream>

//Function to apply an array to an efficient version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    //Initializing loop variables
    int i, j;

    //Tracking variable to see if any parts were switched during a pass
    bool swapped;

    //outer loop to iterate through the array several times
    for (i = 0; i < n - 1; i++)
    {
        //Setting up switched as false at the start of every pass
        swapped = false;

        //Inner loop for comparing and swapping adjacent elements
        for (j = 0; j < n - i - 1; j++)
        {
            //Checking if the current element is bigger than the following element
            if (arr[j] > arr[j + 1])
            {

                // Swap elements using temporary variable
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                //Marking that elements were swapped in this pass
                swapped = true;
            }
        }

        // If no two elements were swapped by the inner loop, then break
        if (!swapped)
            break;
    }
}

// Function to print the elements of an array
void printArray(int arr[], int size)
{
    //Loop for printing each element of the array
    for (int i = 0; i < size; i++)
        std::cout << " " << arr[i];
}

//Main function, the entry point of the program
int main()
{
    // Initializing an array of integers
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };

    //Calculating the size of the array by dividing the total size of the array by the size of an individual element
    int N = sizeof(arr) / sizeof(arr[0]);

    //Calling the bubbleSort function to sort the array
    bubbleSort(arr, N);

    //Printing the sorted array
    std::cout << "Sorted array:\n";
    printArray(arr, N);

    //Returning 0 to indicate successful execution of the program
    return 0;
}