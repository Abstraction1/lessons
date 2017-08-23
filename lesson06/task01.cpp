//Написать программу, которая выводит содержимое массива наоборот.

#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    const int size = 10;
    int array[size];
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand () % size;
    }

    for (int i = size-1; i >= 0; --i) {
        std::cout << array[i] << ' ';
    }

    return EXIT_SUCCESS;   
}
