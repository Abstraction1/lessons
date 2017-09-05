//Напишите программу, вычисляющую среднее арифметическое двух чисел.

#include <iostream>

int func(int a, int b)
{
    return (a+b)/2;
}

int main()
{
    int a = 10;
    int b = 20;
    std::cout << func(a, b) << std::endl;

    return EXIT_SUCCESS;
}
