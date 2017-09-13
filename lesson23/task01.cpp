//Создайте класс динамического массива, в котором реализована проверка выхода за границы массива.
//Перегрузите операторы: [ ], =, +, -,++ (добавление элемента в конец массива), -- (удаление элемента из конца массива).

#include<iostream>

class _array
{
public:
    _array() : elem(0), size(0) {}

    _array(int _size): size(_size) {
        elem = new int[size];
        for (int i = 0; i < size; ++i) {
            elem[i] = 0;
        }
    }


    ~_array() {
        delete [] elem;
    }

private:
    int* elem;
    int size;
};

int main(int argc, char *argv[])
{
    _array a(5);
    return EXIT_SUCCESS;
}
