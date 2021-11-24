#include <iostream>
#include "FillRand.h"
#include "FillRand.cpp"
#include "Print.h"
#include "Print.cpp"

using namespace std;



template<typename T>T* push_back(T arr[], unsigned int& n, T value);
template<typename T>T* push_front(T arr[], unsigned int& n, T value);
template<typename T>T* insert(T arr[], unsigned int& n, T value, unsigned int index);
template<typename T>T* pop_back(T arr[], unsigned int& n);
template<typename T>T* pop_front(T arr[], unsigned int& n);
template<typename T>T* erase(T arr[], unsigned int& n, T value, unsigned int index);

template<typename T>T** allocate(const unsigned int rows, const unsigned int cols);
template<typename T>void clear(T** arr, const unsigned int rows);

template<typename T>T** push_row_back(T** arr, unsigned int& rows, const unsigned int cols);
template<typename T>T** pop_row_back(T** arr, unsigned int& rows, const unsigned int cols);

template<typename T>void push_col_back(T** arr, const unsigned int rows, unsigned int& cols);

int main()
{
	unsigned int rows, columns;
	cout << "Please enter rows: ";
	cin >> rows;
	cout << "\nPlease enter columns: ";
	cin >> columns;
	double** matrix = allocate<double>(rows, columns);
	FillRand(matrix, rows, columns);
	cout << "\nYour array\n";
	Print(matrix, rows, columns);

	clear(matrix, rows);
}


template<typename T>T* push_back(T arr[], unsigned int& n, T value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;	//�������������� ����� ������� ������� ������� ������ �������
	arr[n] = value;	//��������� �������� � ����� �������
	n++;
	return arr;	//���������� ����� ������ �������, � ����������� ���������.
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
template<typename T>T* pop_back(T arr[], unsigned int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>T** allocate(const unsigned int rows, const unsigned int cols)	////////////		���������� ���������� ������������� �������		///////////
{
	T** arr = new T* [rows];	//������� ������ ����������
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols] {};	//�������� ������ ��� ������ ���������� �������
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

template<typename T>T** push_row_back(T** arr, unsigned int& rows, const unsigned int cols)
{
	T** buffer = new T* [rows + 1]{};	//������� ����� ������ ����������
	for (int i = 0; i < rows; i++)
		buffer[i] = arr[i];
	delete[] arr;	//������� ������ ������ ����������
	arr = buffer;
	arr[rows] = new int[cols] {};
	rows++;
	return arr;
}
template<typename T>T** pop_row_back(T** arr, unsigned int& rows, const unsigned int cols)
{
	T** buffer = new T* [--rows]{};
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr[rows];	//������� ��������� ������ �� ������
	delete[] arr;	//������� ������ ������ ����������
	return buffer;
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