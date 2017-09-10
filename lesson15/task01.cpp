//Написать программу, которая осуществляет добавление строки или столбца в любое место двумерной матрицы по выбору пользователя.

#include <iostream>

int main() {
    const int x = 3;
    const int y = 3;
        
    bool is_x_or_y = false;
    int nmb = 1;
    int arr[x][y];

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            arr[i][j] = rand() % 10;
        }
    }
    
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if(is_x_or_y) {
                if(nmb == i) {
                    std::cin>>arr[i][j];
                }
            }
            else if(!is_x_or_y) {
                if(nmb == j) {
                    std::cin>>arr[i][j];;
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
