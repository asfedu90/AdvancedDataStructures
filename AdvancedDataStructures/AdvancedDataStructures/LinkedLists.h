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

	//creates one data field and one pointer field
	//you can add more fieldss, char, string, etc
	//you can also have LL with double pointers, going forward and backwards 
	struct linklist { int data; struct linklist *next; };

	typedef struct linklist node;
	node*start = NULL; //empty list 

	
	//node* GetNode();
	//vector<int>InsertionSort_Lec(vector<int>);
	//vector<int>InsertionSort_Ajoy(vector<int>);
	//vector<int> InsertionSort_Ajoy(vector<int>);
	//vecotr<int> MergeSort_Lec(vector<int>);
	//vecotr<int> MergeSort_Lec_Ajoy(vector<int>);
	//vector <int>SelectionSort(vector<int>);

private:

};

LinkedLists::LinkedLists()
{
}

LinkedLists::~LinkedLists()
{
}

//this fucntion returns a pointer to node
node* LinkedLists::GetNode()
{

}
 
