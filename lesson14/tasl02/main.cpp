//Показать на экран с m по n символов строки, введенной пользователем и записать данный отрезок в другой массив. (m и n также вводятся пользователем)

#include <iostream>

int main()
{
    int m = 5;
    int n = 10;
    int i = 0;
    char symb[100] = {"qwertasdfg"};
    char* s;

    while (m < n) {
        *(s+i) = *(symb+m);
        i++;m++;
    }
    std::cout <<s;

    return EXIT_SUCCESS;
}
