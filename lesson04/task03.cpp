//Пользователь вводит с клавиатуры число, необходимо показать на экран сумму его цифр.

#include <iostream>

int main()
{
    int n = 741;
    int sum = 0;

    for (int i = 1, j = 10; (n/i) > 0; i*=10, j*=10)
    {
        sum += (n%j)/i;
    }
    std::cout << std::endl;
    std::cout << sum;
    return EXIT_SUCCESS;
}
