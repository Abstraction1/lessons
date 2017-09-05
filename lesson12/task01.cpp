//Дан массив целых чисел. Воспользовавшись указателями, поменяйте местами элементы массива с четными и нечетными индексами
//(т.е. те элементы массива, которые стоят на четных местах, поменяйте с элементами, которые стоят на нечетных местах).

#include <iostream>
#include <cstddef>
#include <algorithm>

template <typename T>
void swp (T& a, T& b)
{
    T c(a);a=b;b=c;
}

int main() {
    const int size = 10;
    int a[size] = {9,1,5,4,3,2,5,6,7,8};
    int (*ptr) = a;
    for (int i = 0; i < size; ++i) {
        std::cout << *(ptr+i) << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < size; i+=2) {
        swp (*(ptr+i), *(ptr+i+1));
    }
    std::cout << '\n';
    for (int i = 0; i < size; i++) {
        std::cout << *ptr++ << ' ';
    }
    std::cout << '\n';
    return EXIT_SUCCESS;
}
