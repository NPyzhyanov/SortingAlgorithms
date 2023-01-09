#include <iostream>
#include "used_functions.h"

int main()
{
    int array_size = 8;
    double max_value = 10;
    double min_value = -max_value;
    int number_of_digit_signs = 2;
    bool generate_again = false;

    double Array_initial[array_size];

    generate_array(Array_initial, array_size, min_value, max_value, number_of_digit_signs, generate_again);

    double Array[array_size];
    make_array_as_initial(Array, Array_initial, array_size);

    int algorithms_in_total = 1;
    std::string algorithms_names[6] = {"bubble sort", "cocktail sort", "selection sort", "insertion sort", "quick sort", "merge sort"};
    long algorithms_results[algorithms_in_total];

    for (int algorithm_number = 0; algorithm_number < algorithms_in_total; algorithm_number++)
    {
        int sorted = sorting_algorithm_selector(algorithms_results, algorithm_number, Array, array_size);
        if (sorted == 0)
        {
            if (algorithm_number != algorithms_in_total - 1)
                make_array_as_initial(Array, Array_initial, array_size);
        }
        else if (sorted == -1)
        {
            std::cout << "Error of " << algorithms_names[algorithm_number] << " execution" << std::endl;
            return 1;
        }
        else if (sorted == -2)
        {
            std::cout << "An algorithm #" << algorithm_number << " not found\n";
            return 1;
        }
        else
        {
            std::cout << "Unexpected error of function \"sorting_algorithm_selector\" execution for " << algorithms_names[algorithm_number] << '\n';
            return 1;
        }
    }
    std::cout << "\nInitial array:\n";
    print_array(Array_initial, array_size);

    std::cout << "\nSorted array:\n";
    print_array(Array, array_size);

    std::cout << "\nAlgorithm\tResult\n";
    for (int algorithm_number = 0; algorithm_number < algorithms_in_total; algorithm_number++)
    {
        std::cout << algorithms_names[algorithm_number] << ":\t" << algorithms_results[algorithm_number] << '\n';
    }

    return 0;
}
