//Найти факториал числа, пользуясь только указателями.

#include <iostream>


int f (int n)
{
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    else {
        return n * f(n - 1);
    }
}

int main()
{
    int* number = new int (2);
    int* factor = new int (0);

    *factor = f(*number);
    std::cout << *factor;

    return EXIT_SUCCESS;
}
