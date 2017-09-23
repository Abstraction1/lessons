#ifndef ARRAY_H
#define ARRAY_H

class array
{
private:
    int length_array;
    int* element_array;
    void increment_size_array();
    void dicriment_size_array();
public:
    array(int& len);
    array(array& obj);
    ~array();

    int get_size();
    void init(int elem,...);

    int& operator [](int interation_number);
    array& operator =(const array& obj);
    array& operator +(const array& obj);
    array& operator -(const array& obj);
    array& operator ++();
    array& operator --();
};

#endif // ARRAY_H
