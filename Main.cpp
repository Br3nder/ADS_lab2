#include <iostream>
#include "SORT_ALGORITHMS.h"
using namespace std;

int main()
{
	const int SIZE = 10;
	int arrQ[SIZE], arrI[SIZE], arrB[SIZE];
	char arrC[SIZE];
	fillArrayByRandom(arrQ, SIZE, 100);
	fillArrayByRandom(arrI, SIZE, 100);
	fillArrayByRandom(arrB, SIZE, 100);
	fillCharArrayByRandom(arrC, SIZE, 128);
	cout << "QUICK SORT\nStart: ";
	showArray(arrQ, SIZE);
	quickSort(arrQ, 0, SIZE - 1);
	cout << "\nEnd: ";
	showArray(arrQ, SIZE);
	cout << endl;
	cout << "INSERTION SORT\nStart: ";
	showArray(arrI, SIZE);
	insertionSort(arrI, SIZE);
	cout << "\nEnd: ";
	showArray(arrI, SIZE);
	cout << endl;
	cout << "BOGO SORT\nStart: ";
	showArray(arrB, SIZE);
	bogoSort(arrB, SIZE);
	cout << "\nEnd: ";
	showArray(arrB, SIZE);
	cout << endl;
	cout << "COUNTING SORT\nStart: ";
	showArray(arrC, SIZE);
	countingSort(arrC, SIZE);
	cout << "\nEnd: ";
	showArray(arrC, SIZE);
	cout << endl;
	cout << "BINARY SEARCHING\nArray: ";
	showArray(arrQ, SIZE);
	int n;
	cout << "\nEnter n: ";
	cin >> n;
	cout << "Is in array: " << binarySearch(arrQ, SIZE, n);
	return 0;
};