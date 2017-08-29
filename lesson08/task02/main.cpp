//Написать перегруженные шаблоны функций для нахождения корней линейного (a*x + b = 0) и квадратного (a*x2+b*x + c = 0) уравнений.
//Замечание: в функции передаются коэффициенты уравнений.

#include <iostream>

template <typename T>
double equation (T& a, T& b)
{

    if (a == b && b == 0) return 0;
    if (a == 0 && b != 0) return 0;
    if (a != 0) return b/a;
}

template <typename T, typename T, typename T>
double equation (T& a, T& b, T& c)
{
    if (a == 1)
    {

    }
}

int main()
{
    double a = 5;
    double b = 40;
    double с = 40;


    double x1 = 0.0;
    double x2 = 0.0;

    double res = equation(a, b);
    std::cout << res;
    return EXIT_SUCCESS;
}
