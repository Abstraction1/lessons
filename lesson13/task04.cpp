//Найти заданную степень числа, пользуясь только указателями.

#include <iostream>

int main()
{
    int* number = new int (5);
    int* squrt = new int (0);

    *squrt = *number * *number;

    std::cout << *squrt << std::endl;
    return EXIT_SUCCESS;
}
