#ifndef ALGOLIB_H
#define ALGOLIB_H

template <class __InPutIter, class __generator, class T>
void _generator (__InPutIter __first, __InPutIter __last, const T& __random_value, __generator gen) {
    for(;__first != __last; ++__first) {
        *__first = gen(__random_value);
    }
}

template <class __InPutIter, class __OutPutIter>
__OutPutIter _copy (__InPutIter __first, __InPutIter __last, __OutPutIter __first_first) {
    for(;__first != __last; ++__first) {
        *__first_first++ = *__first;
    }
    return __first_first;
}

template <class __InPutIter, class __OutPutIter, class __predicate, class T>
__OutPutIter _replace (__InPutIter __first, __InPutIter __last, __OutPutIter __first_first, const T& __usr_value, __predicate pred) {

    //make it! =)

    return __first_first;
}

#endif // ALGOLIB_H
