#pragma once
#include<stdlib.h>
#include <vector>
#include <ctime>
#include <string>
using namespace std;

class LinkedLists
{
public:
	LinkedLists();
	~LinkedLists();
	vector<int>BubbleSort_Lec (vector<int>);

	//vector<int> BubbleSort_Ajoy (vector<int>);
	vector<int>InsertionSort_Lec(vector<int>);
	vector<int>InsertionSort_Ajoy(vector<int>);
	//vector<int> InsertionSort_Ajoy(vector<int>);
	//vecotr<int> MergeSort_Lec(vector<int>);
	//vecotr<int> MergeSort_Lec_Ajoy(vector<int>);
	vector <int>SelectionSort(vector<int>);

private:

};

LinkedLists::LinkedLists()
{
}

LinkedLists::~LinkedLists()
{
}


vector <int> LinkedLists::BubbleSort_Lec(vector<int> Arr)

{
	int size = Arr.size();
	for (int i = 0; i < size-1; i++)
	{
		for (int j=0; j<size-i-1; j++)
			if (Arr[j] > Arr[j + 1])
			{
				int temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
	}
	return Arr;
}
vector <int> LinkedLists::InsertionSort_Lec(vector<int> Arr)
{
	int size = Arr.size();
	for (int j = 1; j < size - 1; j++)
	{
		int i = 0;
		while (Arr[j] > Arr[i])
		{
			i = i + 1;
		}
		int temp = Arr[j];
		for (int k = -1; k < j - i - 2; k++)
		{
			Arr[j - k] = Arr[j - k - 1];
		}
		Arr[i] = temp;
	}
	return Arr;
}

vector <int> LinkedLists::InsertionSort_Ajoy(vector<int> arr)
{
	int i, key, j;
	int size = arr.size();

	for (i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	return arr;
}

vector <int> LinkedLists::SelectionSort(vector<int> array)
//
{
	for (int i = 0; i < array.size()-1; i++)
		//loop through each element in given array except last one
	{
		int maxIndex = i; 
		for (int j = i + 1; j < array.size(); j++) //find maximum index in remaining elements
		{
			if (array[j] > array[maxIndex])
			{
				maxIndex = j; //store position of maximum index
			}
			int temp = array[i];
			array[i] = array[maxIndex];
			array[maxIndex] = temp;
		}
		//after finding the maximum index for this iteration.... 
		//swap current value with value from maxindex
		/*Alternately you can put this content outside the loop:
		int temp = array[i];
		array[i] = array[maxIndex];
		array[maxIndex] = temp;*/
	}
	return array;
}