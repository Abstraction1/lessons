#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class matrix
{
private:
    int N;
    int** elemetm_matrix;
    int** filling_matrix();
//    void init();

public:
    matrix(const int& N);
    ~matrix();

    void show();
    void init_rnd();

    matrix& operator +(const matrix& obj);
    matrix& operator *(const matrix& obj);
    matrix& operator =(const matrix& obj);
};

#endif // MATRIX_H
