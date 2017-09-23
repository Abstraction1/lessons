#include "array.h"

void array::increment_size_array()
{
    int* _arr = new int[length_array + 1];

    for (int i = 0; i < length_array; ++i)
    {
        _arr[i] = element_array[i];
    }

    element_array = 0;
    delete[] element_array;

    element_array = _arr;
    length_array++;
}
void array::dicriment_size_array()
{
    int* _arr = new int[length_array - 1];

    for (int i = 0; i < length_array; ++i)
    {
        _arr[i] = element_array[i];
    }

    element_array = 0;
    delete[] element_array;

    element_array = _arr;
    length_array--;
}
array::array(int _len)
{
    length_array = _len;
    if (length_array > 0)
    {
        element_array = new int[length_array];
    }
}
array::~array()
{
    delete[] element_array;
}
int array::get_size()
{
    return this->length_array;
}

void array::show()
{
    for (int i = 0; i < length_array; ++i)
    {
        std::cout << element_array[i] << ' ';
    }
    std::cout << std::endl;
}

array &array::init_rnd()
{
    for (int i = 0; i < length_array; ++i)
    {
        element_array[i] = rand() % 10;
    }
}

int &array::operator [](int interation_number)
{
    return *(element_array + interation_number);
}
array &array::operator =(const array &obj)
{
    for (int i = 0; i < length_array; ++i)
    {
        element_array[i] = obj.element_array[i];
    }
    return *this;
}
array &array::operator +(const array &obj) {
    for (int i = 0; i < length_array; ++i)
    {
        element_array[i] += obj.element_array[i];
    }
    return *this;
}
array &array::operator -(const array &obj)
{
    for (int i = 0; i < length_array; ++i)
    {
        element_array[i] -= obj.element_array[i];
    }
    return *this;
}
array &array::operator ++(int)
{
    increment_size_array();
    return *this;
}
array &array::operator --(int)
{
    dicriment_size_array();
    return *this;
}
