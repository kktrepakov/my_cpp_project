
#include <iostream>
#include <vector>
#include <algorithm>
int arr_sum(const int* arr, std::size_t n) {
    int sum = 0;
    for (std::size_t i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int arr_max(const int* arr, std::size_t n) {
    int max = arr[0];
    for (std::size_t i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int arr_min(const int* arr, std::size_t n) {
    int min = arr[0];
    for (std::size_t i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
double arr_average(const int* arr, std::size_t n) {
    return (static_cast<double>(arr_sum(arr, n)) / n);
}
int arr_count_positive(const int* arr, std::size_t n) {
    int k = 0;
    for (std::size_t i = 0; i < n; i++) {
        if (arr[i] > 0) {
            k++;
        }
    }
    return k;
}
int arr_count_negative(const int* arr, std::size_t n) {
    int k = 0;
    for (std::size_t i = 0; i < n; i++) {
        if (arr[i] < 0) {
            k++;
        }
    }
    return k;
}
int arr_count_zero(const int* arr, std::size_t n) {
    int k = 0;
    for (std::size_t i = 0; i < n; i++) {
        if (arr[i] == 0) {
            k++;
        }
    }
    return k;
}
int arr_product(const int* arr, std::size_t n) {
    int p = 1;
    for (std::size_t i = 0; i < n; i++) {
        p *= arr[i];
    }
    return p;
}
double arr_median(const int* arr, std::size_t n) {
    std::vector<int> copy(arr, arr + n);
    std::sort(copy.begin(), copy.end());
    if (n % 2 == 1) {
        return (copy[n / 2]);
    }
    return (((copy[n / 2 - 1]) + (copy[n / 2])) / 2.0);
}
int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
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