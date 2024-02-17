#!/bin/bash

# Function to compile and run test program for a specific algorithm
run_test() {
    local algorithm="$1"
    local test_file="tests/test_${algorithm}.c"
    local source_file="algorithms/${algorithm}.c"
    local header_file="headers/${algorithm}.h"
    local unity_file="unity/unity.c"

    # Check if test file exists
    if [ ! -f "$test_file" ]; then
        echo "Test file not found: $test_file"
        return 1
    fi

    # Check if source file exists
    if [ ! -f "$source_file" ]; then
        echo "Source file not found: $source_file"
        return 1
    fi

    # Check if header file exists
    if [ ! -f "$header_file" ]; then
        echo "Header file not found: $header_file"
        return 1
    fi

    # Compile test program
    gcc -Itests -Ialgorithms -Iheaders "$test_file" "$source_file" "$unity_file" -o "test_${algorithm}" || return 1

    # Run test program
    "./test_${algorithm}"
}

# Main function
main() {
    local algorithm="$1"
    if [ -z "$algorithm" ]; then
        echo "Usage: $0 <algorithm>"
        return 1
    fi

    run_test "$algorithm"
}

# Call main function with command-line arguments
main "$@"

