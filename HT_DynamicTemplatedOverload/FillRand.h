#pragma once
#ifndef FILLRAND_H
#define FILLRAND_H

template<typename T>void FillRand(T arr[], const unsigned int n, int minRand = 0, int maxRand = 100);
template<typename T>void FillRand(T** arr, const int rows, const int cols);

#endif //FILLRAND_H