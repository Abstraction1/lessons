//Написать класс, описывающий группу студентов. Студент также реализуется с помощью соответствующего класса
#include<iostream>

class stud
{
public:
    stud(char* _name, int _age) : name(_name), age(_age) {}
    char* get_name() {
        return name;
    }
    int get_age () {
        return age;
    }
private:
    char* name;
    int age;
};

class stud_grp
{
public:
    stud_grp(char* _grp_name, stud _student) : grp_name(_grp_name), student(_student) {}
    char* grp_name;
    stud student;
};

int main(int argc, char *argv[])
{
    stud one ("111", 19);
    stud two ("222", 21);
    stud three ("333", 25);
    stud_grp group_1("Bio", one);
    stud_grp group_2("Music", two);
    stud_grp group_3("Box", three);
    return 0;
}
