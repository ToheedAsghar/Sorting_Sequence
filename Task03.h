#pragma once

/*
	First of all, the userinpt matrix is converted into 1-Dimensional Array.
	Then their sorted indexes are stored in another array called Index.
	Afterwards, using the loop, each value of array "Index" is sent to
	print function that applies the mathematical formula (see Function: printIndex)
	and prints required result in index format.
*/

int findSmallest(int array[], int t);
/*
 --- Function Description ---
This Functions will recieve an integer array as a paramter and will find
the minimum value in the array. It returns the array index of the minimum
value and removes the element from the array.

t is the total size of the array
*/

void printIndex(int index_value, int index, int c, int element);
/*
 --- Function Description ---
 This printIndex Function will accept the following arguments and then perform
 some calculations on the index_value as following
 	row = index_value/c
 	column = index_value/c
 	
	then it will print the rows and columns in the following order
	row (space) column (space) numberOfElements

*/
