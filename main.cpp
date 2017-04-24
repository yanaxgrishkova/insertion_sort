#include <iostream>
#include <ctime>
#include <iomanip>

void insertionSort(int *arrayPtr, int length)
{
	int temp, item;
	for (int counter = 1; counter < length; counter++)
	{
		temp = arrayPtr[counter];
		item = counter - 1;
		while (item >= 0 && arrayPtr[item] > temp)
		{
			arrayPtr[item + 1] = arrayPtr[item];
			arrayPtr[item] = temp;
			item--;
		}
	}
}

int main()
{
	srand(time(NULL));
	std::cout << "Please, enter size of array: ";
	int size; 
	std::cin >> size;

	int *array = new int[size];
	std::cout << "Array:" << std::endl;
	for (int counter = 0; counter < size; counter++)
	{
		array[counter] = rand() % 10000;
		std::cout << std::setw(2) << array[counter] << "  ";
	}
	std::cout << std::endl;

	insertionSort(array, size); 

	std::cout << "Sorted array:" << std::endl;
	for (int counter = 0; counter < size; counter++)
	{
		std::cout << std::setw(4) << array[counter] << "  ";
	}
	std::cout << std::endl;

	delete[] array; 
	system("pause");
	return 0;
}
