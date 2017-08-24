//Найти в массиве 3х4 все элементы == 0

#include <iostream>
#include <ctime>

bool isZero(int n)
{
    return n==0;
}

int main()
{
    srand(time(NULL));
    const int x = 3;
    const int y = 4;
    int array[x][y];
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            array[i][j] = rand() % 10;
            std::cout << array[i][j] << ' ';
        }
    }

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            if (!(*(*(array + i) + j))) std::cout << "\n0";
        }
    }      ;
    return EXIT_SUCCESS;        
}
