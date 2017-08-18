/*
Program:	140-Lab8 Recursive
Author :	Quinatzin Sintora
Class  :	CSCI 140 MW
Date   :	04/28/2017
Desciption:		This program using Recursive as a way 
				to loop into an array and find the key
				in an array 

I certifiy that the code below is my own work.

Exception(s): N/A
*/
#include <iostream>
#include <array>

using namespace std;

//Recursive function
bool isMember(const int a[], int n, int key);

int main()
{
	const int SIZE = 7;			//SIZE of array
	int keySearch;				//key to search in an array
		
	int arrayVal[SIZE] = { 0, 20, 1, 23, 40, 50, 212 };

	cout << "Author: Quinatzin Sintora." << endl;
	cout << "Enter an element to search for in the array." << endl;

	cin >> keySearch;

	// making bool value that is now true or false
	// depending on isMember
	bool valueNum = isMember(arrayVal, SIZE, keySearch);
	
	if (valueNum == 1)
	{
		cout << "Key found." << endl;
	}
	else
		cout << "Key not found." << endl;

	system("Pause");
	return 0;
}

// Recursive Function that searches for a key in an array
bool isMember(const int a[], int n, int key)
{
	//returns false if index reaches less then 0
	if (n < 0)
		return false;
	//returns true if index matches with key
	if (a[n] == key)
		return true;
	//goes through as a loop calling
	//function again by minusing 1 every time from
	//the end of index to the begining
	else
		isMember(a, n - 1, key);
}