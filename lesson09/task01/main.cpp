//Написать шаблон функции для поиска среднего арифметического значений массива.
#include <iostream>
#include <cstddef>

template <typename T, typename T1>
auto avrg(T *m, const T1& size) ->double
{
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum+=m[i];
    }
    return sum/size;
}

int main()
{
    const size_t size = 6;
    double array[size] = {123.2,3.0,2.0,2.0,1.0,1.2};
    double result = avrg(array, size);
    std::cout << result;
    return EXIT_SUCCESS;
}
