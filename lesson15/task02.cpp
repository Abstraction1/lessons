#include <iostream>

#define ROWS 3
#define COLS 4

template <class T>
void swap(T& a, T& b)
{
    T c(a);
    a = b;
    b = c;
}

int** create_mass() {
    int i, j;
    int** m = (int** ) malloc(sizeof(int* ) * ROWS);
    for (i = 0; i < ROWS; ++i) {
        m[i] = (int* )malloc(sizeof(int) * COLS);
    }
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            m[i][j] = rand() % 10;
        }
    }
    return m;
}
void show(int** m) {
    int i, j;
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            std::cout << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

void _rows (int** m, int val, bool to) {
    int i, *temp;
    if (to) {
        while (val-- > 0) {
            for (i = 0; i < ROWS - 1; i++) {
                swap(m[i], m[i+1]);
            }
        }
    }
    else {
        while (val-- > 0) {
            for (i = ROWS - 1 ; i > 0; i--) {
                swap(m[i], m[i-1]);
            }
        }
    }
}
void _cols (int** m, int val, bool to) {
    int i, *temp;
    if (to) {
        while (val-- > 0) {
            for (i = 0; i < COLS - 1; i++) {
                for (int j = 0; j < ROWS - 1; ++j) {
                    swap(m[j][i], m[j][i+1]);
                }

            }
        }
    }
    else {
        while (val-- > 0) {
            for (i = COLS - 1; i > 0; i--) {
                for (int j = ROWS - 1; j >= 0; j--) {
                    swap(m[j][i], m[j][i+1]);
                }

            }
        }
    }
}
int main() {

    int** arr = create_mass();
    show(arr);
    _rows(arr, 2, 1);
    std::cout << std::endl;
    show(arr);


    return EXIT_SUCCESS;

}
