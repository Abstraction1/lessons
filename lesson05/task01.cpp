//Создать программу, которая выводит на экран простые числа в диапазоне от 2 до 1000.
//(Число называется простым, если оно делится только на 1 и на само себя без остатка; причем числа 1 и 2 
//простыми не считаются).
//

#include <iostream>


bool isPrime(int n)
{
    if (n==1) return false;
    if (n==2) return false;
    for(int i = 2; i*i<=n; ++i)
    {
        if(!(n%i)) return false;
    }
    
    return true;
}

int main()
{
    
    for (int i = 2; i < 1000; ++i)
    {
        if(isPrime(i)) 
        {
            std::cout << i << ' ';
        }
    }
    return EXIT_SUCCESS;
}
