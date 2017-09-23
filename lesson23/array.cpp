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

array::array(int& _len)
{
    length_array = _len;

    if (length_array > 0)
    {
        element_array = new int[length_array];
    }
}
array::array(array &obj)
{

}
array::~array()
{
    delete[] element_array;
}

int array::get_size()
{
    return this->length_array;
}
void array::init(int elem, ...)
{
    int count = 0;
    int* ptr = &elem;

    while (*ptr)
    {
        count++; ptr++;
    }

    if (length_array >= count)
    {
        ptr = &elem;
        for (int i = 0; i < count; ++i)
        {
            element_array[i] = *(ptr);
            ptr++;
        }
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
array &array::operator +(const array &obj)
{
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
array &array::operator ++()
{
    increment_size_array();
    return *this;
}
array &array::operator --()
{
    dicriment_size_array();
    return *this;
}
