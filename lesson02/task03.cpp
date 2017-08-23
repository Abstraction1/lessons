//Известно, что 1 дюйм равен 2.54 см. 
//Разработать приложение, переводящие дюймы в сантиметры и наоборот.
//Диалог с пользователем реализовать через систему меню.

#include <iostream>

int main()
{
    const double inch = 2.54;
    double a;
    char ch;
    std::cout << "inch to sm press 1 \n";
    std::cout << "sm to inch prees 2 \n";
    std::cin >> ch;
    switch (ch)
    {
        case '1' : 
            std::cout << "inch: ";
            std::cin >> a;
            std::cout << a*inch << " sm\n";
            break;
        case '2' : 
            std::cout<< "sm: ";
            std::cin >> a;
            std::cout << a/inch << " inch\n";
    
    }
    return EXIT_SUCCESS;
}
