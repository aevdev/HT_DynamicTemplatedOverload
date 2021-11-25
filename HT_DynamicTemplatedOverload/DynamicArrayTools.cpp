#include "DynamicArrayTools.h"
#include <iostream>

template<typename T>T* insert(T arr[], unsigned int& n, T value, unsigned int index)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return arr;
}


template<typename T>T** allocate(const unsigned int rows, const unsigned int cols)	////////////		���������� ���������� ������������� �������		///////////
{
	T** arr = new T * [rows];	//������� ������ ����������
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};	//�������� ������ ��� ������ ���������� �������
		//� �������� ������ ����� � �������� ������� ����������.
	}
	return arr;
}
template<typename T>void clear(T** arr, const unsigned int rows) ////////////		�������� ���������� ������������� �������		///////////
{
	//1) ������� ������ ���������� �������:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) ������� ������ ����������:
	delete[] arr;
}