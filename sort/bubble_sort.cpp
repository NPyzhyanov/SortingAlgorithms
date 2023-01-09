int bubble_sort (double* array, int array_size)
{
    int operations_counter = 0;
    double tmp;
    bool sorted = false;
    while (not sorted)
    {
        sorted = true;
        for (int i = 1; i < array_size; i++)
        {
            if (array[i] < array[i-1])
            {
                sorted = false;
                operations_counter += 1;
                tmp = array[i];
                array[i] = array[i-1];
                array[i-1] = tmp;
            }
        }
    }

    bool completely_sorted = true;
    for (int i = 1; i < array_size; i++)
    {
        completely_sorted = completely_sorted && (array[i] >= array[i-1] ? true : false);
    }
    if (completely_sorted == true)
    {
        return operations_counter;
    }
    else
    {
        return -1;
    }
}
