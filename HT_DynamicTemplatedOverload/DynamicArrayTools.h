#pragma once
#ifndef DYNAMICARRAYTOOLS_H
#define DYNAMICARRAYTOOLS_H

template<typename T>T* insert(T arr[], unsigned int& n, T value, unsigned int index);
template<typename T>T* erase(T arr[], unsigned int& n, T value, unsigned int index); //Пока еще не реализована

template<typename T>T** allocate(const unsigned int rows, const unsigned int cols);
template<typename T>void clear(T** arr, const unsigned int rows);

#endif //DYNAMICARRAYTOOLS_H