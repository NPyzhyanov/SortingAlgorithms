#include "sort\\sort.h"
int sorting_algorithm_selector (long* algorithms_results, int algorithm_number, double* array, int array_size)
{
    int result;
    switch (algorithm_number)
    {
        case 0:
            result = bubble_sort(array, array_size);
            break;
        case 1:
            result = 1;//cocktail_sort(array, array_size);
            break;
        case 2:
            result = 2;//selection_sort(array, array_size);
            break;
        case 3:
            result = 3;//insertion_sort(array, array_size);
            break;
        case 4:
            result = 4;//quick_sort(array, array_size);
            break;
        case 5:
            result = 5;//merge_sort(array, array_size);
            break;
        default:
            result = -2;
            break;
    }
    if (result == -1 || result == -2)
    {
        return result;
    }
    else
    {
        algorithms_results[algorithm_number] = result;
        return 0;
    }
}
