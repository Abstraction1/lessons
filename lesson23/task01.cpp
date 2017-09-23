#include <iostream>

class array
{
private:
    int len;
    int* elem;
public:
    array(int l)
    {
        len = l;
        elem = new int[len];
    }
    void show()
    {
        for (int i = 0; i < len; ++i)
        {
            std::cout << *(elem + i) << ' ';
        }
    }

    int& operator [](int i)
    {
        return *(elem + i);
    }

    void operator +(int i)
    {
    }

    void operator -(int i)
    {
    }

    int& operator ++(int i)
    {
        return *(--len + elem) = 10;
    }

    void operator --(int i)
    {
    }

    void operator =(int i)
    {
    }

    ~array()
    {
        delete[] elem;
    }
};

int main(int argc, char *argv[])
{
    array arr(10);

    arr.show();
    arr++;
    arr.show();
    return 0;
}
