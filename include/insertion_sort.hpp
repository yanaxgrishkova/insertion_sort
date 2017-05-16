#include <iostream>
using namespace std;

template <typename Iterator>
void insertion_sort(Iterator first, Iterator last)
{
	if (first >= last)
		return;
	for (Iterator i = first; i != last; ++i)
		for (Iterator j = i - 1; (j != first) && (*j < *(j - 1)); --j)
			iter_swap((j - 1), j);
}
