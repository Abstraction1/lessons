//Через указатели на указатели посчитать сумму двух чисел и записать в третье.
#include <iostream>

int main()
{
    int* a = new int(5);
    int* b = new int(6);
    int* c = new int(0);
    int** d = &c;
    **d = *a + *b;

    std::cout << **d << std::endl;
    return EXIT_SUCCESS;
}
