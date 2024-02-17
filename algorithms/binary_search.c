// algorithms/binary_search.c

#include "../headers/binary_search.h"

// Binary search algorithm implementation
int binary_search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // If the target is found at the middle
        if (arr[mid] == target)
        {
            return mid;
        }
        // If the target is greater, ignore left half
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        // If the target is smaller, ignore right half
        else
        {
            high = mid - 1;
        }
    }

    // If the target is not found in the array
    return -1;
}
