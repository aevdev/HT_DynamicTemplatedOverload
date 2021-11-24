#pragma once
#ifndef FILLRAND_H
#define FILLRAND_H

template<typename T>void FillRand(T arr[], const unsigned int n, T minRand = 0, T maxRand = 100);
template<typename T>void FillRand(T** arr, const int rows, const int cols);

#endif //FILLRAND_H