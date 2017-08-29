//Дан массив чисел размерностью 10 элементов.
//Написать функцию, которая сортирует массив по возрастанию или по убыванию,
//в зависимости от третьего параметра функции. Если он равен 1,
//сортировка идет по убыванию, если 0, то по возрастанию.
//Первые 2 параметра функции - это массив и его размер, третий параметр по умолчанию равен 1.

#include <iostream>
#include <cstddef>
#include <iterator>

template<typename T>
void swp(T& a, T& b)
{
    T c(a);
    a=b;
    b=c;
}

template <typename Iterator, typename B>
void bubble_srt(Iterator first, Iterator last, B& decreaseOrIncrease)
{

    auto next = first;
    while (first < --last)
    {
        for (auto i = first; i < last; ++i)
        {
            if (decreaseOrIncrease)
            {
                if (*(i + 1) < *i)
                {
                    swp(*i, *(i+1));
                }
            }
            else
            {
                if (*(i + 1) > *i)
                {
                    swp(*(i+1), *i);
                }
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    const size_t size = 10;
    int array[size] = {4,7,2,8,9,0,1,2,10,22};
    bool decreaseOrIncrease = true;
    bubble_srt(std::begin(array), std::end(array), decreaseOrIncrease);

    for (auto i = std::begin(array); i != std::end(array); ++i)
    {
        std::cout << *i << ' ';
    }

    return EXIT_SUCCESS;
}
