void make_array_as_initial(double* Array, double* Array_initial, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        Array[i] = Array_initial[i];
    }
}
