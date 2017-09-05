//Дан массив из 20 целых чисел со значениями от 1 до 20.
//Необходимо:
//написать функцию, разбрасывающую элементы массива произвольным образом;
//создать случайное число из того же диапазона и найти позицию этого случайного числа в массиве;
//отсортировать элементы массива, находящиеся слева от найденной позиции по убыванию, а элементы массива, находящиеся справа от найденной позиции по возрастанию.

#include <iostream>
#include <cstddef>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>

template<typename iterator> void shuffle(iterator first, iterator lost) {
    std::random_shuffle(first,lost);
}

template<typename iterator> void filling(iterator first, iterator lost) {
    int i = 0;
    while (first!=lost) {
        *first=++i;
        first++;
    }
}

template<typename iterator> void show(iterator first, iterator lost) {
    std::cout << "show array: \n";
    while (first!=lost) {
        std::cout<<*first<< ' ';
        first++;
    }
    std::cout << '\n';
}

template<typename T> void swp(T& first, T& second) {
    T third(first);
    first=second;
    second=third;
}

template<typename iterator, typename T> void srt(iterator first, iterator lost, T a) {
    while (first != --lost) {
        for (auto i = first; i < lost; ++i) {
            if(a) {
                if (*i < *(i+1)) {
                    swp(*i, *(i+1));
                }
            } else if (!a) {
                if (*i > *(i+1)) {
                    swp(*i, *(i+1));
                }
            }
        }
    }
}

int main() {
    srand(time(NULL));
    const size_t size = 20;
    std::vector<int> v (size);
    int __rnd_nmb = rand()%20 + 1;
    int __indx = 0;
    int _indx = 0;
    bool choice = true;
    filling(v.begin(), v.end());
    shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), [&__rnd_nmb, &__indx, &_indx](int __vctr_elm) {
        bool __isEql = __vctr_elm==__rnd_nmb;
        if (__isEql) {
            _indx=__indx;
        }
        __indx++;
    });
    std::vector<int>::iterator __it_begin = v.begin();
    std::vector<int>::iterator __it_end = v.end();
    std::vector<int>::iterator __it_rnd_indx = __it_begin+(_indx+1);
    srt(__it_begin, __it_rnd_indx, choice);
    choice = false;
    srt(__it_rnd_indx, __it_end, choice);
    std::cout << std::endl;
    std::cout << "be cool";
    return EXIT_SUCCESS;
}
