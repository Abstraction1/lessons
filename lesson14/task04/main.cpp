//Пользователь вводит отдельно строку и символ, необходимо показать на экран номера по порядку всех совпадений (нумерация с единицы).
#include <iostream>

int main()
{
    int len = 10;
    char str[len] = {"privevt"};
    char symb = 'v';

    for (int i = 0; i < len; ++i) {
        if(*(str+i)==symb) {
            std::cout << i << ' ';
        }
    }

    return EXIT_SUCCESS;
}
