#pragma once
#include "ArrayGenerator.h"
class SearchAlgorithms
{
public:
	int LinearSearch_Lec(vector<int> a, int x); //later we can extend this to strings, chars and other comparable obects
	int LinearSearch_LecMod(vector<int> arr, int key);
	int LinearSearch_Ajoy(vector<int> arr, int key);


	int BinarySearch_Lec(vector<int> a, int x);
	int BinarySearch_Ajoy(vector<int> a, int x);
	SearchAlgorithms();
	~SearchAlgorithms();

private:

};


int SearchAlgorithms::LinearSearch_Lec(vector<int> a, int x) // where x is the key and lec == lecture
{
	int i = 0;
	int n = a.size();
	int location = 0;


	while (i <= n && x != a[i])
	{
		i++;
	}

	if (i <= n)
	{
		location = i;
	}
	else {
		location = -1;
	}
	return location; 
}


int SearchAlgorithms::LinearSearch_LecMod(vector<int> arr, int key)
{
	int i = 0;
	int size = arr.size();

	while (i <=size && arr[i] !=key)
		i++;
	
	if (i >= arr.size())
		i = -1;
	
	return i;
}

int SearchAlgorithms::LinearSearch_Ajoy(vector<int> arr, int key)
{
	int size = arr.size();

	for (int i = 0; i < size; i++)
	{
		if (key == arr[i])
			return i;
	}
	return -1;


}

int SearchAlgorithms::BinarySearch_Lec(vector<int> a, int x)
{
	int n = a.size() - 1;
	int location = 0;

	int i = 0;
	int j = n;


	while (i < j)
	{
		int m = (i + j) / 2; //floor is automatically calculated using int division

		if (x > a[m])
		{
			i = m + 1; 
		}
		else
		{
			j = m;
		}
	}

	if (x == a[i])
	{
		location = i;
	}
	else
	{
		location = 0;
	}
	return location;
}

int SearchAlgorithms::BinarySearch_Ajoy(vector<int> arr, int key)
{
	int minIdx = 0;
	int maxIdx = arr.size() - 1;


	while (minIdx < maxIdx)
	{
		int midIdx = (minIdx + maxIdx) / 2; //floor is automatically calculated using int division

		if (key > arr[midIdx])
			minIdx = midIdx + 1;
		else
			maxIdx = midIdx;
	}

	if (key == arr[minIdx])
		return minIdx;
	else
		return - 1;

}


SearchAlgorithms::SearchAlgorithms()
{
}

SearchAlgorithms::~SearchAlgorithms()
{
}