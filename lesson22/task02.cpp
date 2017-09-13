//Добавить в строковый класс
//функцию, которая создает строку, содержащую
//пересечение двух строк, то есть общие символы для двух строк.
//Например, результатом пересечения строк "sdqcg" "rgfas34" будет строка "sg".
//Для реализации функции перегрузить оператор * (бинарное умножение).

#include <iostream>
#include <string>

class String {
public:
    String(){}
    String(std::string _s) : s(_s) {}
    String operator *(const String &b) {
        String res;
        for (int i = 0; i < s.length(); ++i) {
            for (int j = 0; j < b.s.length(); ++j) {
                if (s[i] == b.s[j]) {
                    res.s+=s[i];
                }
            }
        }
        return res;
    }
private:
    std::string s;
};


int main()
{
    String S1("cvx1");
    String S2("zxcv");
    String S = S1*S2;

    return EXIT_SUCCESS;
}
