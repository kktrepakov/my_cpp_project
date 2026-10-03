#include <iostream>
#include "arraylib.h"
int main() {
    int count = 0, n = 8;
    int concentration[] = {
    124, 131, 118, 145,
    139, 127, 152, 133
    };
    std::cout << "Даны значения концентрации веществ в пробах, умноженные на 100:" << std::endl;
    for (std::size_t i = 0; i < n; i++) {
        std::cout << concentration[i] << " ";
    }
    std::cout << std::endl;
    double min = arr_min(concentration, n) / 100.0;
    double max = arr_max(concentration, n) / 100.0;
    double average = arr_average(concentration, n) / 100.0;
    double median = arr_median(concentration, n) / 100.0;
    for (std::size_t i = 0; i < n; i++) {
        if (concentration[i] > 130) {
            count++;
        }
    }
    std::cout << "Анализ значений:" << std::endl;
    std::cout << "Минимальная концентрация: " << min << std::endl;
    std::cout << "Максимальная концентрация: " << max << std::endl;
    std::cout << "Среднее значение всех концентраций: " << average << std::endl;
    std::cout << "Медиана всех концентраций: " << median << std::endl;
    std::cout << "Количество концентраций выше 1.30: " << count << std::endl;
    return 0;
}