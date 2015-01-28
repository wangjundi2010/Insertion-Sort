#include "ToolKits.h"

using namespace std;

int GetSize()
{
	int intSizeOfArray = 0;

	cout << "Please set the size of the input array: " << endl;
	cin >> intSizeOfArray;

	return intSizeOfArray;
}

void InputValue(int SizeOfList, insertion_sort& objMySort)
{
	int intIndex;
	int intInput = 0;

	cout << "Please add element to the array: " << endl;
	for (intIndex = 0; intIndex < SizeOfList; intIndex++)
	{
		cin >> intInput;
		objMySort.SetArray(intInput);
	}
}
