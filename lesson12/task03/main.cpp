//Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать:
//Элементы обоих массивов;
//Общие элементы двух массивов;
//Элементы массива A, которые не включаются в B;
//Элементы массива B, которые не включаются в A;
//Элементы массивов A и B, коотрые не являются общими дял них (то есть объединение результатов двух предыдущих вариантов).

#include <iostream>
#include <algorithm>

int main() {
    const int x = 5;
    const int y = 5;
    int z = x+y;
    int a[x] = {1,9,8,7,2};
    int b[y] = {2,67,2,0,9};

    int *mass=new int[z];

    for (int i = 0; i < x; ++i) {
        std::cout<<a[i]<<' ';
    }
    std::cout<<'\n';
    for (int i = 0; i < y; ++i) {
        std::cout<<b[i]<<' ';
    }
    std::cout<<'\n';

    std::sort(std::begin(a), std::end(a));
    std::sort(std::begin(b), std::end(b));

    for (int i = 0; i < x; ++i) {
        std::cout<<a[i]<<' ';
    }
    std::cout<<'\n';
    for (int i = 0; i < y; ++i) {
        std::cout<<b[i]<<' ';
    }
    std::cout<<'\n';0

    for (int i=0,j=0;i<x,j<z;++i) {
        *(mass+i)=a[i];
        if (j>=x) {
            *(mass+i)=b[j];
            j++;
        }
    }

    for (int i = 0; i < x+y; ++i) {
        std::cout<<*(mass+i)<<' ';
    }


}
