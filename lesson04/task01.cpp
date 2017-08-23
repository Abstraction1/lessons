//Пользователь вводит с клавиатуры число - программа должна показать сколько в данном числе цифр.
//Число вводится целиком в одну переменную.


#include <iostream>

int main()
{
    int n = 3256;
    int count = 0;
    
    while (n > 0) 
    {
        n=n/10;
        ++count;
    }
    std::cout << count;
    return EXIT_SUCCESS;
}
