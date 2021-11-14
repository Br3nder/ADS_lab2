#include <iostream>
using namespace std;

bool isSorted(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        if (arr[i] > arr[i + 1]) return false;
    return true;
}

void shuffle(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        swap(arr[i], arr[rand() % size]);
}

void showArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void showArray(char* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void quickSort(int* arr, int first, int last)
{	
    if (first < last)
    {
        int left = first, right = last, pivot = arr[(left + right) / 2];
        do
        {
            while (arr[left] < pivot) left++;
            while (arr[right] > pivot) right--;
            if (left <= right)
            {
                int tmp = arr[left];
                arr[left] = arr[right];
                arr[right] = tmp;
                left++;
                right--;
            }
        } while (left <= right);
        quickSort(arr, first, right);
        quickSort(arr, left, last);
    }
}

void insertionSort(int* array, int size)
{
    int tmp, 
        item; // last element
    for (int counter = 1; counter < size; counter++)
    {
        tmp = array[counter]; 
        item = counter - 1; // save prev element index
        while (item >= 0 && array[item] > tmp)
        {
            array[item + 1] = array[item];
            array[item] = tmp;
            item--;
        }
    }
}

void countingSort(char* array, int size)
{
    char max = 0;
    for (int i = 0; i < size; i++)
        if (array[i] > max) max = array[i];
    char* arr2 = new char[max + 1];
    for (int i = 0; i < max + 1; i++)
        arr2[i] = 0;
    for (int i = 0; i < size; ++i) {
        ++arr2[array[i]];
    }
    int b = 0;
    for (int i = 0; i < max + 1; ++i) {
        for (int j = 0; j < arr2[i]; ++j) {
            array[b++] = i;
        }
    }
    
}

int binarySearch(int *array, int size, int num)
{
    int left = -1;
    int middle;
    int right = size - 1; // left & right searching border
    while (right - left > 1)
    {
        middle = (left + right) / 2; // middle of searching zone
        if (array[middle] >= num)
            right = middle; 
        else
            left = middle; 
    }
    if (array[right] == num)
        return 1;
    else
        return 0;
}

void bogoSort(int *arr, int size)
{
    int i = 1;
    while (!isSorted(arr, size))
    {
        /*if (i % 10000 == 0)
        {
            system("cls");
            cout << "I'm trying... It's " << i << " attempt!\n";
        }*/
            
        shuffle(arr, size);
        i++;
    }
    //cout << "I have done this with " << i << " attempts\n";
}

bool isSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        if (arr[i + 1] < arr[i]) return false;
    return true;
}

void fillArrayByRandom(int* arr, int size, int maxNum)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % maxNum;
}

void fillCharArrayByRandom(char* arr, int size, int maxNum)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % maxNum;
}

bool isSortChar(char* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        if (arr[i + 1] < arr[i]) return false;
    return true;
}
