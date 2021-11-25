#include"Pop.h"
#include <iostream>

template<typename T>T* pop_back(T arr[], unsigned int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>T** pop_row_back(T** arr, unsigned int& rows, const unsigned int cols)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr[rows];	//Удаляем последнюю строку из памяти
	delete[] arr;	//Удаляем старый массив указателей
	return buffer;
}