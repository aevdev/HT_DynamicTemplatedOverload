#include"Push.h"
#include <iostream>

template<typename T>T* push_back(T arr[], unsigned int& n, T value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;	//перезаписываем адрес старого массива адресом нового массива
	arr[n] = value;	//Добавляем значение в конец массива
	n++;
	return arr;	//Возвращаем адрес нового массива, с добавленным значением.
}

template<typename T>T* push_front(T arr[], unsigned int& n, T value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}

template<typename T>T** push_row_back(T** arr, unsigned int& rows, const unsigned int cols)
{
	T** buffer = new T * [rows + 1]{};	//Создаем новый массив указателей
	for (int i = 0; i < rows; i++)
		buffer[i] = arr[i];
	delete[] arr;	//Удаляем старый массив указателей
	arr = buffer;
	arr[rows] = new int[cols] {};
	rows++;
	return arr;
}

template<typename T>void push_col_back(T** arr, const unsigned int rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}