//Пользователь вводит строку с клавиатуры в фиксированный массив.
//Необходимо проверить, cколько элементов массива теперь занято, сколько свободно и сколько всего вообще.

#include <iostream>
#include <iterator>

int main()
{
    const int len = 100;
    char symb[len] = {"qwert"};
    char* ptr = symb;
    int i = 0;

    while (*(ptr+i) != '\0') {
        i++;
    }

    std::cout << "busy = " << i << std::endl;
    std::cout << "free = " << len-i << std::endl;
    std::cout << "all = " << len <<std::endl;
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
