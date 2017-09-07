
#include <iostream>
#include <ctime>


template <class iter, class T>
iter find_my (iter first, iter last,const  T& value) {
    while (first != last && *first != value) ++first;
    return first;
}


inline int randomizer (const int& value) {
    return rand () % value;
}

inline void  drow (int* (arr)[5], const int& row) {
     
}
