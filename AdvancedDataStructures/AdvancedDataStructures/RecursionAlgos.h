#pragma once
#include<stdlib.h>
#include <vector>
#include <ctime>
#include <string>
using namespace std;

class RecursionAlgos
{
public:
	RecursionAlgos();
	~RecursionAlgos();
	int QuinNuggetGainer_v1(int n_count);
	int QuinNuggetGainer_v2(int n_count);
	int QuinNuggetGainer_v3(int n_count);

	int Quin_WasteReleaser_v1(int n_count);
	int Quin_Multiplier_v1(int n_count);
	int Quin_Multiplier_levels(int n_count, int levels);

	int Fib1(int sequencePos);

	void RecursivePrint(vector<int>& arr, int idx);
	void RecursivePrintBack1(vector<int> & arr, int idx);

private:

};

RecursionAlgos::RecursionAlgos()
{

}

RecursionAlgos::~RecursionAlgos()
{
}

int RecursionAlgos::QuinNuggetGainer_v1(int n_count)
{
	//n count =1 (because I got 1 at the start in main);
	int backpack = 0;
	if (n_count == 3)
	{
		return n_count;
	}
	
	backpack = QuinNuggetGainer_v1(n_count + 1); //ncount =2 because I get one more!!!
	
	return backpack;

}

int RecursionAlgos::QuinNuggetGainer_v2(int n_count)
{

	if (n_count == 3)
	{
		return n_count;
	}

	n_count = QuinNuggetGainer_v2(n_count + 1); 

	return n_count;

}

int RecursionAlgos::QuinNuggetGainer_v3(int n_count)
{

	if (n_count == 3)
	{
		return n_count;
	}

	return QuinNuggetGainer_v2(n_count + 1);

}

int RecursionAlgos::Quin_WasteReleaser_v1(int n_count)
{
	if (n_count == 0)
	{
		return n_count;
	}

	return Quin_WasteReleaser_v1(n_count - 1);
	
}

int RecursionAlgos::Quin_Multiplier_v1(int n_count)
{
	if (n_count >=1000)
	{
		return n_count;
	}
	return Quin_Multiplier_v1(n_count*2);
}

int RecursionAlgos::Quin_Multiplier_levels(int n_count, int levels)
{
	if (n_count >= 1000)
	{
		cout << "I now have " << levels << " levels"<<endl;
		return n_count;
		
	}
	return Quin_Multiplier_levels(n_count * 2, levels+1);

}

int RecursionAlgos:: Fib1(int x)
{

	if (x <= 2)
	{
		return 1;
	}

	return Fib1(x - 2) + Fib1(x - 1);
}

void RecursionAlgos::RecursivePrint(vector<int> & arr, int idx)
{
	if (idx < arr.size())
	{
		cout << arr[idx] << "  ";
		RecursivePrint(arr, idx+1);
	}
}

void RecursionAlgos::RecursivePrintBack1(vector<int> & arr, int idx)
{
	int temp = 0;
	temp=arr.size()-1-idx;
	if (temp < 0)
	{
		return;
	}

	{
		cout << arr[temp] << "  ";
		RecursivePrintBack1(arr, idx+1);
		
	}
}
