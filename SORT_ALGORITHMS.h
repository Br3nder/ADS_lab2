#pragma once

int binarySearch(int* array, int size, int num);
void quickSort(int *array, int first, int last);
void insertionSort(int* array, int size);
void bogoSort(int *array, int size);
void countingSort(char* array, int size);
void showArray(int* array, int size);
void showArray(char* array, int size);
bool isSort(int* array, int size);
void fillArrayByRandom(int* array, int size, int maxNum);
void fillCharArrayByRandom(char* array, int size, int maxNum);
bool isSortChar(char* array, int size);

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
