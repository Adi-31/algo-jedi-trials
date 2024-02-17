// tests/test_binary_search.c

#include "../unity/unity.h"
#include "../headers/binary_search.h" // Include the header file for binary search implementation

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

// Test case for binary search algorithm
void test_binary_search(void)
{
    // Define an array to test
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Perform binary search
    int result = binary_search(arr, size, target);

    // Check if the target is found at the correct index
    TEST_ASSERT_EQUAL_INT(3, result);
}

// Main function to run the tests
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_binary_search);
    return UNITY_END();
}
