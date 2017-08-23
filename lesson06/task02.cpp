//Написать программу, которая находит сумму четных и сумму нечетных элементов массива.

#include <iostream>
#include <ctime>

bool isEvenOrOdd(int digit)
{
    if(digit%2) return 1;
    else return 0;
}

int main()
{
    srand(time(NULL));

    const int size = 10;
    int array[size];
    int oddSum = 0;
    int evenSum = 0;
    
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand()%10;
    }

    for(int i = 0; i < size; ++i)
    {
        if(isEvenOrOdd(array[i])) 
        {
            oddSum+=array[i];
        }
        else
        {
            evenSum+=array[i];
        }
    }

    return EXIT_SUCCESS;
}

