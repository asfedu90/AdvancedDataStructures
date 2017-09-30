#pragma once
#include<stdlib.h>
#include <vector>
using namespace std;

class ArrayGenerator
{
public:
	ArrayGenerator();
	~ArrayGenerator();
	vector<int> GetSmallToLargeSortedArray(int size);
	void PrintArray(vector<int> vecToPrint);
private:

};

void ArrayGenerator::PrintArray(vector<int> vecToPrint) //vector is now called vecToPrint...function will print any vector
{
	for (int i = 0; i < vecToPrint.size(); i++)
	{
		cout << vecToPrint[i] << "  ";
	}
}
vector<int> ArrayGenerator::GetSmallToLargeSortedArray(int size)
{
	vector<int> sortedArray;

	for (int i = 1; i < size+1; i++)
	{
		sortedArray.push_back(i);
	}

	return sortedArray;
}


ArrayGenerator::ArrayGenerator()
{
}

ArrayGenerator::~ArrayGenerator()
{
}