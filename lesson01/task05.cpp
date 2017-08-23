//Введите три числа и выведите на экран значение суммы и произведения этих чисел.

#include <iostream>

void func (int a, int b, int c);

int main()
{

    int a, b, c;
    std::cin >> a >> b >> c;
    func (a, b, c);

    return EXIT_SUCCESS;
}

void func (int a, int b, int c)
{
    std::cout << a+b+c << '\n';
    std::cout << a*b*c << '\n';
}
