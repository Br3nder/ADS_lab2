#pragma once

int binarySearch(int* arr, int size, int num);
void quickSort(int *arr, int first, int last);
void insertionSort(int* arr, int size);
void bogoSort(int *arr, int size);
void countingSort(char* arr, int size, int max);
void showArray(int* arr, int size);
void showArray(char* arr, int size);
bool isSort(int* arr, int size);
void fillArrayByRandom(int* arr, int size, int maxNum);
void fillCharArrayByRandom(char* arr, int size, int maxNum);
bool isSortChar(char* arr, int size);

#include <chrono>

class Timer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	Timer() : m_beg(clock_t::now())
	{
	}

	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};
