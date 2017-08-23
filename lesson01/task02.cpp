//Напишите программу, которая переводит гривны в $,Є, российские рубли.

#include <iostream>

void func(int a);

int main()
{
    int a = 2500; 
    func (a);
    return EXIT_SUCCESS;
}

void func(int a)
{
    std::cout << a/25 << " in $" << std::endl;
    std::cout << a/30 << " in E" << std::endl;
    std::cout << a*3 << " in rub" << std::endl;
}
