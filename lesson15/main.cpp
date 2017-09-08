#include <iostream>
#include <iterator>
#include "algolib.h"

int main()
{
    const int x(3);
    const int y(3);
    int random_integer(10);
    int arr[x][y];
    _generator(&*(*arr), &*(*arr+(x*y)), random_integer, [](int _n) {
        return rand()%_n;
    });
    _copy(&*(*arr), &*(*arr+(x*y)), std::ostream_iterator<int>(std::cout, " "));

    return EXIT_SUCCESS;
}
