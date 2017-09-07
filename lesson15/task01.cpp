//Написать программу, которая осуществляет добавление строки или столбца в любое место двумерной матрицы по выбору пользователя.

#include <iostream>
#include "tmp.cpp"
#include <algorithm>

const int row = 3;	
const int col = 5;	
	
int main() {	
    const int random_value = 10;;	
    
    int arr[row][col];	
    int* (arr_ptr)[col]; 
	
	auto it_begin = std::begin(arr);	
	auto it_end = std::end(arr);
    
    std::for_each (std::begin(arr_ptr), std::end(arr_ptr), [&random_value](int _x) {
            _x=randomizer(random_value);
        }
    );
        
    drow (arr_ptr, row);
	std::cout << std::endl; 
	return 0;				
}
