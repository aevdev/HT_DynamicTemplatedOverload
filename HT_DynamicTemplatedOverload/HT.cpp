#include <iostream>
#include "FillRand.h"
#include "FillRand.cpp"
#include "Print.h"
#include "Print.cpp"
#include "Push.h"
#include "Push.cpp"
#include "Pop.h"
#include "Pop.cpp"
#include "DynamicArrayTools.h"
#include "DynamicArrayTools.cpp"

using namespace std;

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

	return 0;
}