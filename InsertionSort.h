#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <memory>
#include <iostream>
using namespace std;

namespace INSERTION_SORT
{
	class insertion_sort
	{
	public:
		insertion_sort(int size);
		void SetArray(int userInput);
		void InsertionSort();
		void OutPut();


	private:
		unique_ptr<int[]> myList; //Same as "int* myList", but smart pointer can self delete automatically.
		int intSizeOfList;
	};
}

#endif
