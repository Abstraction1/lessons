#include <iostream>
#include <string>
#include <algorithm>

#define ALL_FILM 3
struct film
{
    std::string name;
    std::string dir;
    std::string gen;
    int rait;
    int pr;
};

void find_name (film* a, std::string name) {
    for (int i = 0; i < ALL_FILM; ++i) {
        if (a[i].name == name) {
            std::cout << i;
        }
    }
}

void find_dir (film* a, std::string name) {
    for (int i = 0; i < ALL_FILM; ++i) {
        if (a[i].dir == name) {
            std::cout << i;
        }
    }
}

void find_gen (film* a, std::string name) {
    for (int i = 0; i < ALL_FILM; ++i) {
        if (a[i].gen == name) {
            std::cout << i;
        }
    }
}


void all_film (film* a, std::string name) {
    for (int i = 0; i < ALL_FILM; ++i) {
        std::cout << a[i].name << " " << a[i].dir << " " << a[i].gen << " " << a[i].pr << " " <<a[i].rait;
    }
}

void find_max (film* a) {
    int xz;
    for (int i = 0; i < ALL_FILM; ++i) {
        for (int j = ALL_FILM-1; j > 0; --j) {
            xz = std::max(a[i].rait, a[j].rait);
        }
    }
    std::cout << xz;
}

int main()
{
    film a[3];
    a[0] = {"1", "11", "111", 2, 4};
    a[1] = {"2", "22", "222", 33, 5};
    a[2] = {"3", "33", "333", 4, 6};

    find_max(a);
    return EXIT_SUCCESS;
}
