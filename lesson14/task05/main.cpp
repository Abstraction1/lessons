//Пользователь вводит отдельно строку и символ, необходимо показать на экран номер по порядку только последнего совпадения (нумерация с единицы).

#include <iostream>

int main()
{
    int len = 10;
    int l = 0;
    char str[len] = {"privvvet"};
    char symb = 'v';
    for (int var = 0; var < len; ++var) {
        if(*(str+var) == symb) {
            l=var;
        }
    }
    std::cout << l;
    return EXIT_SUCCESS;
}
