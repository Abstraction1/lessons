//Произвести, используя указатель на указатель проверку на нуль при делении.

#include <iostream>

int main()
{
    int* a = new int(5);
    int* b = new int(0);
    int** bb = &b;

    if(**bb == 0) {
        std::cout << "error";
    }
    else {
        std::cout << *a / *b;
    }

    return EXIT_SUCCESS;
}
