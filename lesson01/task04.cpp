//Напишите программу, которая вычисляет квадрат любого, введенного числа.

#include <iostream>

int func (int a);

int main()
{
    int a;
    std::cin >> a;
    int res = func (a);
    
    std::cout << res << '\n';
    return EXIT_SUCCESS;
}

int func (int a)
{
    return a*a;
}
