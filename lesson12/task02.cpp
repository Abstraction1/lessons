//Даны два массива, упорядоченных по возрастанию: А[n] и B[m].
//Сформируйте массив C[n+m], состоящий из элементов массивов А и В, упорядоченный по возрастанию.
#include <iostream>
#include <algorithm>
#include <ctime>
#include <array>

template <typename iterator>
void filling (iterator first, iterator last) {
    while (first != last) {
        *first=rand()%20;
        first++;
    }
}

template <typename iterator>
void show (iterator first, iterator last) {
    std::cout << std::endl;
    while (first != last) {
        std::cout<<*first<<' ';
        first++;
    }
    std::cout << std::endl;
}

int main() {
    srand(time(NULL));
    const int size_a = 10;
    const int size_b = 20;
    const int size_c = size_a+size_b;

    std::array<int, size_a> a;
    std::array<int, size_b> b;
    std::array<int, size_c> c;

    filling(std::begin(a), std::end(a));
    filling(std::begin(b), std::end(b));

    for (int i=0,j=0; i<size_c; ++i) {
        if (i < size_a) {
            c[i] = a[i];
        } else {
            c[i]=b[j];
            j++;
        }
    }
    show(std::begin(c), std::end(c));
    return EXIT_SUCCESS;
}
