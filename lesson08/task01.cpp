//Написать шаблон функции для поиска среднего арифметического значений массива.

#include <iostream>
#include <cstddef>

template <typename T>
double avrg (const T * m, const size_t size)
{
    double sum = 0;
    for (int i= 0; i < size; i++)
    {
        sum+=m[i];
    }
    return sum/size;
}

int main()
{
    double res = 0;
    const size_t size = 6;
    int mass[size] = {3,3,2,2,1,1};
    res = avrg(mass, size);
    std::cout << res;
    return EXIT_SUCCESS;
}
