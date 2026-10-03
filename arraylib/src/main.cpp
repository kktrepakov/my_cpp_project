#include <iostream>
#include "arraylib.h"
int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
    std::cout << "--- ArrayLib Demo App v1.1.0-dev ---" << std::endl;
    std::cout << "Sum: " << arr_sum(data, 6) << std::endl;
    std::cout << "Max: " << arr_max(data, 6) << std::endl;
    std::cout << "Min: " << arr_min(data, 6) << std::endl;
    std::cout << "Average: " << arr_average(data, 6) << std::endl;
    std::cout << "Positive: " << arr_count_positive(data, 6) << std::endl;
    std::cout << "Negative: " << arr_count_negative(data, 6) << std::endl;
    std::cout << "Zero: " << arr_count_zero(data, 6) << std::endl;
    std::cout << "Product: " << arr_product(data, 6) << std::endl;
    std::cout << "Median: " << arr_median(data, 6) << std::endl;
    return 0;
}
