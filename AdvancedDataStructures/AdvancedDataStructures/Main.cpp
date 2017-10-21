#include <stdio.h>
#include <iostream>
#include "ArrayGenerator.h"
#include "Timer.h"
#include "SearchAlgorithms.h"
#include "SortingAlgorithms.h"
#include "GreedyAlgos.h"
#include "RecursionAlgos.h" 
#include "Assignment1.h"
#include "Euclidian.h"
//FINAL! October 27 at school can take it onlilne (Canvas) with password (lockdown browser) can get help, 
//come to class for professor's help (nfactorial=how many expensive operations).
using namespace std;

vector<int>  GetTwoIntegers();

int main()
{




	/*
	cout << "Hello World by Ajoy and Jennifer"<< endl;
	cout << "Jennifer's Part" <<endl;
	cout << "Ajoy's Part"<<endl;

	ArrayGenerator arrayGen;//creates an instance of ArrayGenerator class which in the stack
	int size = 0; 
	cout << "Please enter a size for the array:" << endl;
	cin>>size;

	vector<int> tempArray = arrayGen.GetSmallToLargeSortedArray(size);

	arrayGen.PrintArray(tempArray);
	cout << endl; 

	vector<int> tempArray2 = arrayGen.GetSmallToLargeSortedArray(10);
	arrayGen.PrintArray(tempArray2);
	cout << endl;

	int val = 0;
	cout << "Please enter a size for the array:" << endl;
	cin >> val ;

	vector<int> tempArray3 = arrayGen.GetLargeToSmallSortedArray(val);

	cout << endl; 
	arrayGen.PrintArray(tempArray3);

	vector<int> tempArray4 = arrayGen.GetRandArray(10);
	cout << endl;
	arrayGen.PrintArray(tempArray4);
	tempArray4 = arrayGen.ModifyArrayValue(tempArray4, 2, 99999);
	arrayGen.PrintArray(tempArray4);
	


	ArrayGenerator arrayGen;
	vector<int> tempArray5 = arrayGen.GetUserSpecifiedArray();
	arrayGen.PrintArray(tempArray5);


	Timer timer;

	ArrayGenerator arrayGen;
	timer.StartTimer();

	vector<int> tempArray4 = arrayGen.GetRandArray(10000);
	arrayGen.PrintArray(tempArray4);

	double totalTime = timer.EndTimer();
	cout << totalTime<<endl;


	
	string temp;
	cout << "point of time 1 press enter";
	cin >> temp;
	
	cout << "point of time 2 press enter";
	cin >> temp;


	
	Timer timer;
	ArrayGenerator arrayGen;
	
	vector<int> tempArray5 = arrayGen.GetSmallToLargeSortedArray(100000);
	//tempArray5 = arrayGen.ModifyArrayValue(tempArray5, 565, 99);
	//arrayGen.PrintArray(tempArray5);

	SearchAlgorithms searchAlgos; 
	timer.StartTimer();
	cout << searchAlgos.LinearSearch_Lec(tempArray5, 96810) << endl;;
	double totalTime = timer.EndTimer();
	cout << totalTime << endl;
	
	timer.StartTimer();
	cout << searchAlgos.LinearSearch_LecMod(tempArray5, 96810) << endl;;
	totalTime = timer.EndTimer();
	cout << totalTime << endl;

	timer.StartTimer();
	cout << searchAlgos.LinearSearch_Ajoy(tempArray5, 96810) << endl;;
	totalTime = timer.EndTimer();
	cout << totalTime << endl;


	timer.StartTimer();
	cout << searchAlgos.BinarySearch_Lec(tempArray5, 96810) << endl;;
	totalTime = timer.EndTimer();
	cout << totalTime << endl;


	GreedyAlgorithms sortAlgos;
	ArrayGenerator arrayGen;
	
	vector<int> tempArray6 = arrayGen.GetRandArray(30);
	cout << "printing unsorted array" << endl;
	arrayGen.PrintArray(tempArray6);

	tempArray6 = sortAlgos.InsertionSort_Ajoy(tempArray6);
	cout << "printing sorted array" << endl;
	arrayGen.PrintArray(tempArray6);
	
	//vector <int> SortingAlgorithms::BubbleSort_Lec(vector<int> Arr)

	

	RecursionAlgos recursionAlgos;
	int numNuclearWaste = 5; 
	numNuclearWaste = recursionAlgos.Quin_WasteReleaser_v1(numNuclearWaste);
	cout <<"I have come back with " <<  numNuclearWaste;
	

RecursionAlgos recursionAlgos;
int x = 5;
int levels = 0;
int value = 0;
value = recursionAlgos.Fib1(x);
cout << "I have come back with " << value;
//cout << "I have passed " << levels << " levels.";


RecursionAlgos recursive;
int idx = 0;
ArrayGenerator arrayGen;

vector<int> arr= arrayGen.GetRandArray(20);
cout << "Printing through loop:" << endl;
arrayGen.PrintArray(arr);
cout << "Printing through recursion:" << endl;
recursive.RecursivePrint(arr, idx);
cout << endl << "recursively printing backwards" << endl;
recursive.RecursivePrintBack1(arr, idx); */

ArrayGenerator arrayGenAssg2;
/*
vector <int> storage= arrayGenAssg2.GuidedUserDefinedArray();
arrayGenAssg2.PrintArray(storage);
SortingAlgorithms sorter;
storage= sorter.SelectionSort(storage);
arrayGenAssg2.PrintArray(storage);
*/

vector<int> tempVector= GetTwoIntegers();
arrayGenAssg2.PrintArray(tempVector);

	return 0;
} 

//EEA()
/*
This function get two integers from user, and stores them in a vector
and returns that vector.
*/
vector<int>  GetTwoIntegers()

{
	vector<int> twoNum;
	cout << "Type first number: ";
	int temp;
	cin >> temp;
	twoNum.push_back(temp);


	cout << "Type second  number: ";
	int temp2;
	cin >> temp2;
	twoNum.push_back(temp2);

	return twoNum;

}