//Пользователь вводит с клавиатуры число, необходимо перевернуть его (число) и вывести на экран.


#include <iostream>

int main()
{
    int n = 15768;

    for (int i = 10, b = 1; ;i*=10, b*=10)
    {
        if (((n%i)/b)==0) break;
        std::cout << (n%i)/b;
    }

    return EXIT_SUCCESS;
}

