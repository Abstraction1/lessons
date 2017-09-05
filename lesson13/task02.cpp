//Написать примитивный калькулятор, пользуясь только указателями
#include <iostream>

double sum(double* a, double* b) {
    return *a + *b;
}

double m_nus(double* a, double* b) {
    return *a - *b;
}

double mult(double* a, double* b) {
    return *a * *b;
}

double divide(double* a, double* b) {
    return *a / *b;
}

int main()
{
    double* a = new double(5.4);
    double* b = new double(3.1);
    double* res = new double(0.0);

    *res = sum(a, b);
    *res = m_nus(a, b);
    *res = mult(a, b);
    *res = divide(a, b);

    std::cout << std::endl;
    return EXIT_SUCCESS;
}
