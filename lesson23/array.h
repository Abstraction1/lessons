#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class array
{
private:
    int length_array;
    int* element_array;
    void increment_size_array();
    void dicriment_size_array();
public:
    array(int _len);
    ~array();

    int get_size();
    void show();
    array& init_rnd();

    int& operator [](int interation_number);
    array& operator =(const array& obj);
    array& operator +(const array& obj);
    array& operator -(const array& obj);
    array& operator ++(int);
    array& operator --(int);
};

#endif // ARRAY_H
