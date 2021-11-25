#pragma once
#ifndef POP_H
#define POP_H

template<typename T>T* pop_back(T arr[], unsigned int& n);
template<typename T>T* pop_front(T arr[], unsigned int& n); //Пока не реализована
template<typename T>T** pop_row_back(T** arr, unsigned int& rows, const unsigned int cols);

#endif //POP_H