//Разработать класс Person, который содержит соответствующие члены для хранения:
//имени,возраста, пола и телефонного номера.
//Напишите функции-члены, которые смогут изменять эти члены данных индивидуально.
//Напишите функцию-член Person::Print(), которая выводит отформатированные данные о человеке.

#include <iostream>
#include <string>

class Person
{
public:

    Person(std::string _name, int _age, bool _sex, int _phone) : name(_name), age(_age), sex(_sex), phone(_phone) {}

    void set_name (std::string n) {
        name = n;
    }
    void set_age(int n) {
        age = n;
    }
    void set_sex (bool n) {
        sex = n;
    }
    void set_phone (int n) {
        phone = n;
    }

    void ptint() {
        std::cout << "Name : " << name << ", age : " << age << ", sex : " << sex << ", phone : " << phone;
    }

private:

    std::string name;
    int age;
    bool sex;
    int phone;
};

int main()
{
    Person one ("qq", 21, 1, 036);
    one.set_name("tra");
    one.ptint();
    return 0;
}
