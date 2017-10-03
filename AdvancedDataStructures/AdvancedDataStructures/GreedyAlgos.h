#pragma once
#include<stdlib.h>
#include <vector>
#include <ctime>
#include <string>
using namespace std;

class GreedyAlgorithms
{
public:
	GreedyAlgorithms();
	~GreedyAlgorithms();

	vector<int>Greedy_Lec(vector<int>);
	vector<int>Greedy_Ajoy(vector<int>);


private:

};

GreedyAlgorithms::GreedyAlgorithms()
{
}

GreedyAlgorithms::~GreedyAlgorithms()
{
}


vector <int> GreedyAlgorithms::Greedy_Lec(vector<int> Arr)

{
	//Example: design a greedy algorithm for making change of n cents with the following coins: 
	//quarters (25 cents), dimes (10 cents), nickels (5 cents), 
	//and pennies (1 cent), using the least number of coins.

	int size = Arr.size();
	int q = 25;
	int d = 10;
	int n = 5;
	int p = 1;
	int bal = 0;


	for (int i = 0; i >= 25; i++)

	{

		int bal = 67;
		if (bal > 25)
		{
			bal = bal - q;
		}
		else if (bal < 24)
		{
			return;
		}

	}


	MinusDime(balance)
	{
		for (int i = 0; i >= 10; i++)

		{

			if (bal > 25)
			{
				bal = bal - q;
			}
			else if (bal < 24)
			{
				return;
			}

		}
	}
	//for (int i = 0; i < size - 1; i++)
	//{
		//for (int j = 0; j<size - i - 1; j++)
		//	if (Arr[j] > Arr[j + 1])
			//{
				//int temp = Arr[j];
				//Arr[j] = Arr[j + 1];
				//Arr[j + 1] = temp;
			//}
//	}
	//return Arr;
}
/*
vector <int> GreedyAlgorithms::Greedy2_Lec(vector<int> Arr)
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

vector <int> GreedyAlgorithms::Greedy_Ajoy(vector<int> arr)
{
	int i, key, j;
	int size = arr.size();

	for (i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

		 
		 //Move elements of arr[0..i-1], that are
		//greater than key, to one position ahead
		//of their current position 
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	return arr;
}

vector <int> GreedyAlgorithms::Greedy_Ajoy2(vector<int> arr)
{

}
*/