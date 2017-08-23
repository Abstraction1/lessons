//Напишите программу, проверяющую число, введенное с клавиатуры на четность.

#include <iostream>

bool func (int a);

int main ()
{
    int a;
    std::cin >> a;
    if (!func(a))
    {
        std::cout << "even" << std::endl;
    }
    else
    {
        std::cout << "odd" << std::endl;
    }
    return EXIT_SUCCESS;
}

bool func (int a)
{
    return a%2;
}
