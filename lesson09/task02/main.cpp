//Написать перегруженные шаблоны функций для нахождения корней линейного
//(a*x + b = 0) и квадратного (a*x2+b*x + c = 0) уравнений.
//Замечание: в функции передаются коэффициенты уравнений.

#include <iostream>

template <typename T>
void equation (T a, T b, T& x)
{
    x = -(b/a);
}

template <typename T>
void equation (T a, T b, T c, T& x1, T& x2)
{
    T D = (b * b) - (4 * a * c);
    x1 = (-b + D)/(2 * a);
    x2 = (-b - D)/(2 * a);
}

int main()
{
    auto _x1 = 0;
    auto _x2 = 0;
    auto x = 0.0;

    equation(6.0, 72.0, x);
    equation(1, 3, -5, _x1, _x2);
    std::cout << x << '\n';
    std::cout << _x1 << " " << _x2 << '\n';

    return EXIT_SUCCESS;
}
