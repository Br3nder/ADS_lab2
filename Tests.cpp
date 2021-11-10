#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2/SORT_ALGORITHMS.h"
#include "../lab2/SortAlgorithms.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		

		TEST_METHOD(TestQuickSort)
		{
			int arr[100000];
			fillArrayByRandom(arr, 100000, 2000);
			quickSort(arr, 0, 100000 - 1);
			Assert::IsTrue(isSort(arr, 100000));
		}
		TEST_METHOD(TestInsertionSort)
		{
			int arr[100000];
			fillArrayByRandom(arr, 100000, 2000);
			insertionSort(arr, 100000);
			Assert::IsTrue(isSort(arr, 100000));
		}
		TEST_METHOD(TestBogoSort)
		{
			int arr[10];
			fillArrayByRandom(arr, 10, 100);
			bogoSort(arr, 10);
			Assert::IsTrue(isSort(arr, 10));
		}
		TEST_METHOD(TestCountingSort)
		{
			char arr[10];
			fillCharArrayByRandom(arr, 10, 128);
			countingSort(arr, 10, 128);
			Assert::IsTrue(isSortChar(arr, 10));
		}
		TEST_METHOD(TestBinarySearch)
		{
			int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
			Assert::IsTrue(binarySearch(arr, 10, 3));
		}
	};
}
