#include<iostream>
#include"Task03.h"

using namespace std;

int main()
{
	int r, c;
	
	cout << "Enter the number of Rows    : "; cin >> r;
	cout << "Enter the number of columns : "; cin >> c;
	
	// --- Declaring the 2D Array --- //
	int **userArray = new int*[r];
	for(int i=0; i<r; i++)
	{
		userArray[i] = new int[c];
	}
	
	cout << "\nEnter the Matrix Elements: " << endl;
	
	// --- Taking Input --- //
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin >> userArray[i][j];
		}
	}
	
	// Printing the Array
	cout << "\n-----------\nYour Array:\n-----------\n" << endl;
	for(int i=0; i<r;i++)
	{
		for(int j=0;j<c; j++)
		{
			cout << userArray[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << "\n\n" << "----------\nSorting:\n----------\n";
	
	// --- Converting the 2D array into 1D array --- //
	int t = r*c;
	int *array = new(nothrow) int[t];
	if(array == NULL)
	{
		cout << "\nSomething went wrong" << endl;
		exit(1);
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			array[j+c*i] = userArray[i][j];
		}
	}
	
	// --- Implementing the Main Logic --- //	
	int *index = new(nothrow) int[t];
	if(index == NULL)
	{
		cout << "\n --- Unexpected Error Occured ---\n" << endl;
		return 1;	
	}	


	/*
	    variable names: 
						1   2       3
						row column element
	*/
	
	int element;
	for(int i=0; i<t; i++)
	{
		index[i] = findSmallest(array, t); // find smallest will return the index of the minimum
	}
		
	// --- Main Logic of the Program --- //
	element = 1;
	int i(0), temp, flag(0), temprary(0), y(0), tempFlag(0);
	for(i=0; i<t; i++)
	{
		temp = i;
		flag = 0;
		if(index[i] == index[i+1]-1)
		{
			if(flag != 1)
				y = i;
			flag = 1;
			element++;
			for(int j=i+1; j<t; j++)
			{
				if(index[j] == index[j+1]-1)
				{
					element++;
					i++; 
				}
				else
					break;
			}
			temprary = y;
			tempFlag = 1;					
		}
		else
		{
			if(tempFlag == 0)
			{
				printIndex(index[temp], temp, c, element);
				tempFlag = 0;
			}
			else
			{
				printIndex(index[temprary], temprary, c, element);
				tempFlag = 0;
			}
			element = 1;
		}
	}
	
	delete[] index;
	index = nullptr;
	return 0;	
}


