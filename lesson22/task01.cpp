//Создайте класс Date, который будет содержать информацию о дате (день, месяц, год).
//С помощью механизма перегрузки операторов, определите операцию разности двух дат (результат в виде количества дней между датами),
//а также операцию увеличения даты на определенное количество дней.

#include<iostream>

#define year_const 365
#define mounth_const 30

class Date {
public:
    Date (int _year, int _mounth, int _day) :  year(_year), mounth(_mounth), day(_day)  {
        n=in_day_converter(year,mounth,day);
    }
    int operator - (Date other_date) {
        return this->n - other_date.n;
    }
private:
    int in_day_converter (int& y, int& m, int& d) {
        return ((y*year_const)+(m*mounth_const)+d);
    }
    int year;
    int day;
    int mounth;
    long n;
};

int main() {
    Date one(1991, 12, 10);
    Date two(1991, 11, 10);
    int a = one-two;
    return EXIT_SUCCESS;
}
