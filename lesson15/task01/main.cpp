//Написать программу, которая осуществляет добавление строки или столбца в любое место двумерной матрицы по выбору пользователя.
#include <iostream>

struct array_width_and_height {
    int x_width__ = 3;
    int y_height__ = 4;
};

template <typename _int_my>
int** filling (_int_my& _x, _int_my& _y)
{
    int** __arr;
    __arr = new int*[_x];

    for (int i_x = 0; i_x < _x; ++i_x) {
        *(__arr + i_x) = new int[_y];
    }

    for (int i_x = 0; i_x < _x; ++i_x) {
        for (int j_y = 0; j_y < _y; ++j_y) {
            *(*(__arr + i_x) + j_y) = rand()%10;
        }
    }
    return __arr;
}

template <typename T, typename T1>
void show (T * _arr, T1& _x, T1& _y)
{
    for (int i = 0; i < _x; ++i) {
        for (int j = 0; j < _y; ++j) {
            std::cout << *(*(_arr + i) + j)<< ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

template <typename _array_my, typename _int_my, typename _struct_type_ptr_ptr_int, typename _struct_type_void>
int** addLine (_array_my * _arr, _int_my& x, _int_my _y,
               _struct_type_ptr_ptr_int __fill,
               _struct_type_void __show) {

    int* __width_x__ = new int (6);
    int* __height_y__ = new int (6);
    int** __arr;

    //delete
    for (int i_del = 0; i_del < *__width_x__; ++i_del) {
        delete[] __arr[i_del];
    }
    delete __width_x__;
    delete __height_y__;
    return __arr;
}

struct ptr_to_functions {
    int** (*ptr_func_filling) (int& __width, int& __height) = filling;
    void (*ptr_func_show) (int** __arr, int& __width, int& __height) = show;

};

int main()
{
    struct array_width_and_height* coords = new struct array_width_and_height;
    struct ptr_to_functions* func = new struct ptr_to_functions;
    int** matrix;

    matrix = filling(coords->x_width__, coords->y_height__);
    show(matrix, coords->x_width__, coords->y_height__);

    return EXIT_SUCCESS;
}
