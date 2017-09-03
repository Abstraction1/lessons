//Удалить с m по n символов, перезаписать строку и показать ее на экран.
#include <iostream>
#include <string>

int main()
{
    int m = 5 ;
    int n = 7;
    int len = 19;
    char strr[len];
    char str[len]={"Privet"};

    for (int i=0;i<len;i++) {
        if (i<m-1 || i>n-1) {
            strr[i]=str[i];
        }
    }
    for (int i=0;i<len;i++) {
        str[i]=strr[i];
    }
    for (int i=0;i<len;i++) {
        std::cout<<str[i];
    }

    return 0;
}
