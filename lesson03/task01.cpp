// Разработать программу, которая выводит на экран горизонтальную линию из символов. 
// Число символов, какой использовать символ, и какая будет линия - вертикальная, 
// или горизонтальная - указывает пользователь.


#include <iostream>

void v(char a, int c);
void h(char a, int c);
int main()
{
    
    char ch;
    bool b;
    int n;
    std::cin >> ch >> b >> n; 
    
    if(b) {
        v(ch, n);
    }
    else
    {
        h(ch, n);
    }
    return EXIT_SUCCESS;
}

void v (char a, int c)
{
    for (int i = 0; i < c; i++) {
        std::cout << a << std::endl;
    }
}

void h (char a, int c)
{
    for (int i = 0; i < c; i++) {
        std::cout << a;
    }
}
