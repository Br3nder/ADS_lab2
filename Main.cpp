#include <iostream>
#include "SORT_ALGORITHMS.h"
using namespace std;

int main()
{
	const int SIZE = 10;
	int arrayQ[SIZE], arrayI[SIZE], arrayB[SIZE];
	char arrayC[SIZE];
	fillArrayByRandom(arrayQ, SIZE, 100);
	fillArrayByRandom(arrayI, SIZE, 100);
	fillArrayByRandom(arrayB, SIZE, 100);
	fillCharArrayByRandom(arrayC, SIZE, 128);
	cout << "QUICK SORT\nStart: ";
	showArray(arrayQ, SIZE);
	quickSort(arrayQ, 0, SIZE - 1);
	cout << "\nEnd: ";
	showArray(arrayQ, SIZE);
	cout << endl;
	cout << "INSERTION SORT\nStart: ";
	showArray(arrayI, SIZE);
	insertionSort(arrayI, SIZE);
	cout << "\nEnd: ";
	showArray(arrayI, SIZE);
	cout << endl;
	cout << "BOGO SORT\nStart: ";
	showArray(arrayB, SIZE);
	bogoSort(arrayB, SIZE);
	cout << "\nEnd: ";
	showArray(arrayB, SIZE);
	cout << endl;
	cout << "COUNTING SORT\nStart: ";
	showArray(arrayC, SIZE);
	countingSort(arrayC, SIZE);
	cout << "\nEnd: ";
	showArray(arrayC, SIZE);
	cout << endl;
	cout << "BINARY SEARCHING\nArray: ";
	showArray(arrayQ, SIZE);
	int n;
	cout << "\nEnter n: ";
	cin >> n;
	cout << "Is in array: " << binarySearch(arrayQ, SIZE, n);
	return 0;
};