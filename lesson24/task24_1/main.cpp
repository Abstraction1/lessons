//Создать класс для работы с матрицами.
//Предусмотреть, как минимум, функции для сложения матриц, умножения матриц, транспонирования матриц, присваивания матриц друг другу,
//установка и получение произвольного элемента матрицы. Необходимо перегрузить соответствующие операторы.

#include "matrix.h"

int main()
{
    int NN = 3;
    matrix A(NN);
    matrix B(NN);
    matrix C(NN);

    A.init_rnd();
    B.init_rnd();
    C = A + B;
    std::cout << "matr a: \n"; A.show(); std::cout << "\n";
    std::cout << "matr b: \n"; B.show(); std::cout << "\n";
    std::cout << "matr c: \n"; C.show(); std::cout << "\n";

//    a+b;
//    c.show();

//    a*b;
//    c.show();
    return EXIT_SUCCESS;
}
