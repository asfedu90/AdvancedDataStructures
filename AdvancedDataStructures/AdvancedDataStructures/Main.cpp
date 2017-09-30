#include <stdio.h>
#include <iostream>
#include "ArrayGenerator.h"
using namespace std;


int main()
{

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







	vector<int> tempArray2 = arrayGen.GetSmallToLargeSortedArray(35);
	arrayGen.PrintArray(tempArray2);
	return 0;
}