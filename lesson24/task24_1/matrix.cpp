#include "matrix.h"

int **matrix::filling_matrix()
{
    int** arr = new int*[N];
    for (int i = 0; i < N; ++i)
    {
        arr[i] = new int[N];
    }
    return arr;
}

void matrix::init_rnd()
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            elemetm_matrix[i][j] = i * i + j + j;
        }
    }
}

matrix::matrix(const int &_N) : N(_N)
{
    elemetm_matrix = filling_matrix();
}

matrix::~matrix()
{
    for (int i = 0; i < N; ++i) {
        delete[] elemetm_matrix[i];
    }
}

void matrix::show()
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std::cout << elemetm_matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

matrix &matrix::operator +(const matrix &obj)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            elemetm_matrix[i][j] += obj.elemetm_matrix[i][j];
        }
    }
    return *this;
}

matrix &matrix::operator *(const matrix &obj)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < N; ++k)
            {
                 elemetm_matrix[i][k] * obj.elemetm_matrix[k][j];
            }
        }
    }
    return *this;
}

matrix &matrix::operator =(const matrix &obj)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            elemetm_matrix[i][j] = obj.elemetm_matrix[i][j];
        }
    }
    return *this;
}
