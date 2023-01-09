#include <cstdlib>
#include <ctime>
#include <cmath>

void generate_array(double* array, int array_size, double min_value, double max_value, int number_of_digit_signs, bool generate_again)
{
    if (generate_again)
    {
        srand(time(0));
    }

    for (int i = 0; i < array_size; i++)
    {
        double integral_part = static_cast<double>(rand() % static_cast<int>(max_value - min_value)) + min_value;
        double decimal_part = static_cast<double>(rand() % static_cast<int>(pow(10, number_of_digit_signs))) / pow(10, number_of_digit_signs);
        array[i] = integral_part + decimal_part;
    }
}
