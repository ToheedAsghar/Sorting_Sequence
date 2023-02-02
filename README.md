# Sorting_Sequence
A 2D array has elements out of order. You have to find the correct order of elements. Note that you don't have to give sorted list rather you have to give indexes of elements so that one can read them in order. For example, consider following 2D array of size 2 x 5:

28 45 48 36 49<br>
50 51 38 39 23<br>

The correct order is 2,5,1 - 1,1,1 - 1,4,1 - 2,3,2 - 1,2,2 - 1,5,3. Here first element is in second row, fifth column, second element is in first row, first column, third element is in first row, fourth column, then there are two elements starting from second row, third column, again there are two elements starting from first row, second column and lastly there are three elements. First element is in first row fifth column and two elements are in start of second row. You have to read rows, columns. Next read values row x columns. You have to print correct sequence of elements in triplet form. See output format carefully.

## Input Format
2 5<br>
28 45 48 36 49<br>
50 51 38 39 23<br>
## Output Format
2 5 1<br>
1 1 1<br>
1 4 1<br>
2 3 2<br>
1 2 2<br>
1 5 3<br>
