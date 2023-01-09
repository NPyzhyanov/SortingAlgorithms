#include <iostream>

void print_array(double* array, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        std::cout << (i == 0 ? "" : " ") << array[i];
    }
    std::cout << std::endl;
}
