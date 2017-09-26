//Создать класс для работы с матрицами. Предусмотреть, как минимум,
//функции для сложения матриц, умножения матриц, транспонирования матриц, присваивания матриц друг другу,
//установка и получение произвольного элемента матрицы.
//Необходимо перегрузить соответствующие операторы.

#include <iostream>
#include <time.h>

class Matrix
{
private:
    int size;
    int random_element;
    int** element;
    int** filling();

public:
    Matrix();
    Matrix(int _size);
    ~Matrix();

    void show();
    int get_rnd_elem();
    void set_rnd_elem();

    const Matrix& operator =(const Matrix& obj);
    Matrix operator +(const Matrix& obj);
    Matrix operator -(const Matrix& obj);
    Matrix operator *(const Matrix& obj);
    const Matrix& transpon();
};

int main()
{
    srand(time(NULL));
    Matrix a;
    Matrix b;
    Matrix c;
    return EXIT_SUCCESS;
}

int **Matrix::filling()
{
    int** arr = new int*[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new int[size];
    }
    return arr;
}

Matrix::Matrix()
{
    size = 3;
    element = filling();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            *(*(element + i) + j) = rand() % 10;
        }
    }
}

Matrix::Matrix(int _size)
{
    size = _size;
    element = filling();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            *(*(element + i) + j) = 0;
        }
    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < size; ++i) {
        delete[] element[i];
    }
    delete[] element;
}

void Matrix::show()
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << *(*(element + i) + j) << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int Matrix::get_rnd_elem()
{
    int a = rand()%size;
    int b = rand()%size;
    return element[a][b];
}

void Matrix::set_rnd_elem()
{
    int a = rand()%size;
    int b = rand()%size;
    int c;
    std::cin >> c;
    element[a][b] = c;
}

const Matrix &Matrix::operator =(const Matrix &obj)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            this->element[i][j] = obj.element[i][j];
        }
    }
    return *this;
}

Matrix Matrix::operator +(const Matrix &obj)
{
    Matrix result;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result.element[i][j] = this->element[i][j] + obj.element[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator -(const Matrix &obj)
{
    Matrix result;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result.element[i][j] = this->element[i][j] - obj.element[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator *(const Matrix &obj)
{
    Matrix result;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result.element[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                result.element[i][j] += this->element[i][k] * obj.element[k][j];
            }
        }
    }
    return result;
}

const Matrix &Matrix::transpon()
{
    Matrix tmp;
    tmp = *this;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            this->element[j][i] = tmp.element[i][j];
        }
    }
    return *this;
}
