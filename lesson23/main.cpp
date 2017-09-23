//Создайте класс динамического массива, в котором реализована проверка выхода за границы массива.
//Перегрузите операторы:
//[ ], =, +, -,++ (добавление элемента в конец массива), -- (удаление элемента из конца массива).

#include <iostream>
#include "array.h"

//void show(array& arr, const int& n)
//{
//    for (int i = 0; i < n; ++i) {
//        std::cout << arr[i] << ' ';
//    }
//    std::cout << std::endl;
//}

int main(int argc, char *argv[])
{
    int n = 5;
    array arr(n);

    arr.init(2,4,6,7,8);


    return EXIT_SUCCESS;
}
