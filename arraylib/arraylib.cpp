#include <vector>
#include <algorithm>
#include "arraylib.h"
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

