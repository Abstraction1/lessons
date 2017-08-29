//Дан массив случайных чисел в диапазоне от -20 до +20. Необходимо найти позиции крайних отрицательных элементов
//(самого левого отрицательного элемента и самого правого отрицательного элемента) и отсортировать элементы, находящиеся между ними.

#include <iostream>
#include <ctime>
#include <cstddef>
#include <iterator>

template <typename Iterator>
void fill(Iterator first, Iterator last)
{
    while (first < last)
    {
        *first++ = rand()% 40 + (-20);
    }
}

template <typename Iterator>
void show(Iterator first, Iterator last)
{
    while (first < last)
    {
        std::cout << *first++ << ' ';
    }
}

template <typename T>
void swp (T& a, T& b)
{
    T c(a);
    a = b;
    b = c;
}

template <typename Iterator>
Iterator leftBoard(Iterator first)
{
    if(*first < 0)
    {
        return first;
    }
    else
    {
        *first++;
        return leftBoard(first);
    }

}

template <typename Iterator>
Iterator rightBoard(Iterator first)
{
    if(*first < 0)
    {
        return first;
    }
    else
    {
        *first--;
        return rightBoard(first);
    }
}

template <typename Iterator>
void bubble_sort(Iterator first, Iterator last)
{
    while (first < --last)
    {
        for (auto i = first; i != last; ++i)
        {
            if (*(i + 1) < *i)
            {
                swp(*i, *(i+1));
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    const size_t size = 10;
    int arr[size];
    auto _begin = std::begin(arr);
    auto _end = std::end(arr);
    auto _endArr = _end - 1;

    fill(_begin, _end);
    std::cout << "show array: \n";
    show(_begin, _end);

    auto lb = leftBoard(_begin);
    auto rb = rightBoard(_endArr);

    std::cout << "\n\nshow array board: \n";
    std::cout << "left board = "<< *lb << " right board = " << *rb;

    std::cout << "\n\nsort array: \n";
    bubble_sort(std::begin(arr), std::end(arr));
    show(lb, rb);
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
