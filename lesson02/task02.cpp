//Дано натуральное число а (a<100). 
//Напишите программу, выводящую на экран количество цифр в этом числе и сумму этих цифр

#include <iostream>

int main()
{
    int a = 99;
    int sum = 0;
    int count = 0;
    for (int i = 1; i <=10;  i*=10) {
        
        i < 10 ?   : sum += (a%i)+(a/i);
        ++count;        
    }
        std::cout << sum << " " << count << std::endl;
    return EXIT_SUCCESS;
}
