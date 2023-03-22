#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrlength)
{
	cout << "\n";
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}


short CheckNumber(int arr[100], int arrlength, int Number)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (Number == arr[i])  {return i;}
	}
	return -1;
}

		

int main()
{
	int arr[100], arrlength = 0;
	arrlength = ReadPositiveNumber("Please enter number of array !");

	FillArray(arr, arrlength);
	PrintArray(arr, arrlength);
	int Number = ReadPositiveNumber("\n\nPlease enter a number to search");
	int PositionNumber = CheckNumber(arr, arrlength, Number);

	if (PositionNumber == -1)
	{
		cout << "\nthe number not found :-(" << endl;
	}
	else 
	{
		cout << "\nthe number found at in position : " << PositionNumber << endl;
		cout << "\nthe number found its oreder : " << PositionNumber + 1 << endl;
	}
	return 0;
}