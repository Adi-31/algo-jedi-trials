// algorithms/linear_search.c

#include "../headers/linear_search.h"

// Linear search algorithm implementation
int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}
