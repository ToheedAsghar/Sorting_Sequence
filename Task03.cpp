#pragma once

#include<iostream>
#include"Task03.h"

using namespace std;

int findSmallest(int array[], int t)
{
	int i=0, j=0, index =0, flag = 1;
	for(i=0; i<t; ++i)
	{
		int min = array[i];
		for(j=0; j<t; j++)
		{
			if((min > array[j]))
			{
				min = array[j];
				index = j;				
			}
		}
	}

	array[index] = INT_MAX;
	
	return index;	
}


void printIndex(int index_value, int index, int c, int element)
{
	
	int row=1, column = 0;
	
	if(element==1)
	{
		if(index_value < c)
		{
			cout << row << " " << index_value+1 << " " << element << endl;
		}
		else
		{
			row = index_value/c;
			column = index_value %c;
			cout << row+1 << " " << column+1 << " " << element << endl;
		}
	}
	else
	{
		if(index_value<c)
		{
			cout << row << " " << index_value+1 << " " << element << endl;
		}
		else
		{
			row = index_value/c;
			column = index_value %c;
			
			if(index_value%2==0)
			{
				cout << row+1 << " " << column+1 << " " << element << endl;	
			}
			else
				cout << row+1 << " " << column+1 << " " << element << endl;
		}
	}
	
}