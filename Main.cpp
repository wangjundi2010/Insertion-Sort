#include "Insertion_Sort.h"
#include "ToolKits.h"

#include <iostream>
using namespace std;
using namespace INSERTION_SORT;

int main(void)
{
	int intSizeOfArray = 0;

	intSizeOfArray = GetSize();

	// Insertion Sort Section:
	insertion_sort objMyInsertionSort(intSizeOfArray);
	InputValue(intSizeOfArray, objMyInsertionSort);
	objMyInsertionSort.InsertionSort();
	objMyInsertionSort.OutPut();

	return 0;
}
