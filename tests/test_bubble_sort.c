// test_bubble_sort.c

#include "../unity/unity.h"
#include "../headers/bubble_sort.h"

// Define empty setUp function
void setUp(void)
{
    // No setup required
}

// Define empty tearDown function
void tearDown(void)
{
    // No teardown required
}

// Test case for bubble sort algorithm
void test_bubble_sort(void)
{
    // Define an array to test
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using bubble sort
    bubble_sort(arr, n);

    // Expected sorted array
    int expected[] = {11, 12, 22, 25, 34, 64, 90};

    // Check if the array is sorted
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, n);
}

// Main function to run the tests
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_bubble_sort);
    return UNITY_END();
}
