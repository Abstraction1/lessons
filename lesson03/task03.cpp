//Дано натуральное число n. Написать программу, которая вычисляет факториал неотрицательных целых 
//чисел n (т.е. число целое и больше 0). 
//Формула вычисления факториала приведена ниже. n! = 1*2*3*....*n, 
//(формула вычисления факториала числа n) 0! = 1 (факториал 0 равен 1 (по определению факториала))

#include <iostream>

int main()
{
    int n;
    int res = 1;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        res*=i;    
    }
    
    std::cout << res << "\n";

    return EXIT_SUCCESS;
}