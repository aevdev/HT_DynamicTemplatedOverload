#pragma once
#ifndef PUSH_H
#define PUSH_H

template<typename T>T* push_back(T arr[], unsigned int& n, T value);
template<typename T>T* push_front(T arr[], unsigned int& n, T value);
template<typename T>T** push_row_back(T** arr, unsigned int& rows, const unsigned int cols);
template<typename T>void push_col_back(T** arr, const unsigned int rows, unsigned int& cols);

#endif //PUSH_H