#include"Insertion_Sort.h"

using namespace std;

namespace INSERTION_SORT
{
	insertion_sort::insertion_sort(int Size)
	{
		myList = unique_ptr<int[]> (new int [Size]);
		intSizeOfList = 0;
	}

	void insertion_sort::SetArray(int userInput)
	{
		myList[intSizeOfList] = userInput;
		++intSizeOfList;
	}

	void insertion_sort::InsertionSort()
	{
		int intIndex_1 = 0; 
		int intTemp = 0;

		
		for (intIndex_1 = 1; intIndex_1 < intSizeOfList; intIndex_1++)
		{
			while((myList[intIndex_1] < myList[intIndex_1 - 1]) && ((intIndex_1 - 1) >= 0))
			{
				intTemp = myList[intIndex_1 - 1];
				myList[intIndex_1 - 1] = myList[intIndex_1];
				myList[intIndex_1] = intTemp;

				intIndex_1--;
			}
		}
		
	}

	void insertion_sort::OutPut()
	{
		int intIndex;

		for (intIndex = 0; intIndex < intSizeOfList; intIndex++)
		{
			cout << myList[intIndex] << " ";
		}

		cout << endl;
	}
}
