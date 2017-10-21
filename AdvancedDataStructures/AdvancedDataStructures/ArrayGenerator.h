#pragma once
#include<stdlib.h>
#include <vector>
#include <ctime>
#include <string>
using namespace std;

class ArrayGenerator
{
public:
	ArrayGenerator();
	~ArrayGenerator();
	vector<int> GetSmallToLargeSortedArray(int size);
	vector<int> GetLargeToSmallSortedArray(int size);
	void PrintArray(vector<int> vecToPrint);
	vector<int>GetRandArray(int size);
	vector<int>GetUserSpecifiedArray();
	vector<int> ModifyArrayValue(vector<int> vectorToChange, int size, int deleteElement);
	vector<int> GuidedUserDefinedArray();
	//void PrintDynamicallyAllocatedArray(int*userDefinedArray); 
private:

};

/*
void PrintDynamicallyAllocatedArray(int*userDefinedArray)
{

} */

vector<int> ArrayGenerator::GuidedUserDefinedArray()
{
	//functions prompts user for length of array and each element to fill array
	//promts user for size of array
	//loops through elements and assigns them to proper index

	int userDefinedSize = 0;

	cout << "How many elements are in your array?" << endl;
	cin >> userDefinedSize;
	vector <int> userArray(userDefinedSize);
	
	for (int i = 0; i < userDefinedSize; i++)
	{
		cout << "Enter the value for element at index: " << i << endl;
		int userImput = 0;
		cin >> userImput;
		userArray[i] = userImput;
	}
	
	return userArray;

	//dereference to free memeory;

}

void ArrayGenerator::PrintArray(vector<int> vecToPrint) //vector is now called vecToPrint...function will print any vector
{
	for (int i = 0; i < vecToPrint.size(); i++)
	{
		cout << vecToPrint[i] << "  ";
	}

	cout << endl;
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

vector<int> ArrayGenerator::GetLargeToSmallSortedArray(int size)
{
	vector<int> sortedArray;

	for (int i = size; i > 0; i--)
	{
		sortedArray.push_back(i);
	}

	return sortedArray;
}

vector<int> ArrayGenerator::GetRandArray(int size)
{
	vector<int> randomArray;

	srand((int)time(0));

	for (int i = size; i > 0; i--)
	{

		int r = (rand() % 1000) + 1;
		randomArray.push_back(r);
	}

	return randomArray;
}

vector<int> ArrayGenerator::ModifyArrayValue(vector<int> vectorToChange, int idxToChange, int idxValue)
{

	vectorToChange[idxToChange] = idxValue;

	return vectorToChange;

}

///count elements in series using commas as terminators. 
vector<int> ArrayGenerator::GetUserSpecifiedArray()
{
	vector <int> retArray; 

	string strInput="";
	cout << "please enter a series of numbers, separated by commas:" << endl;
	cin >> strInput; 
	
	string tempStr = "";

	//loop through user input char by char
	for (int i = 0; i < strInput.size(); i++)
	{
		/*if curr char is a not a comman (thus a suitable character)
		then append that character to a temporary string
		*/
		if (strInput[i] != ',')
		{
			char digitChar = (strInput[i]);
			tempStr += digitChar;
		}
		
		/*if curr char is comma, then convert temp string to number, 
		and push that number into return array*/
		else if (strInput[i] == ',')
		{
			int num = atoi(tempStr.c_str());
			retArray.push_back(num);
			tempStr = "";
		}

		/* if we are at the end of user input string,
		//convert temp string to number, and push that number*/
		if (i == strInput.size() - 1)
		{
			int tempInt = atoi(tempStr.c_str());
			retArray.push_back(tempInt);
		}
	}

	return retArray;
}

ArrayGenerator::ArrayGenerator()
{
}

ArrayGenerator::~ArrayGenerator()
{
}