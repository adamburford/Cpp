/*		Adam Burford
CGS2402 - Programming in  C++ for Business: Online#1413
June 04, 2016 ©
Chapter 8 - Programming Challenge #8: Search Benchmarks
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

/*	Linear Search: Uses a linear search algorithm to find a target t, in array a, of length l. 
	Returns: the number of comparisions it took to find target t in array a; -1 if not found
*/
int linearSearch(int a[], int t, int l);

/*	Binary Search: uses binary search algorithm to find target t, in array a, of length l
	Returns: the number of comparisions it took to find target t in array a; -1 if not found
*/
int binarySearch(int a[], int t, int l);

int main()
{
	srand((unsigned)time(NULL));

	const int SIZE = 30;		// Size of array
	const int MAX = 100;		// Maximum value of random numbers to generate

	// Select target # to search for with test search algorithms
	int target = (rand() % MAX) + 1;

	// Set up test Array with random values from 1-100 excluding my target
	int testArray[SIZE];

	for (int &i : testArray)
	{
		int j = 0;								
		do {				
			j = (rand() % MAX) + 1;
		} while (j == target);			// Making sure I don't put the target number in the array anywhere yet
		i = j;

	}
	testArray[rand() % SIZE] = target;	// Insert the target number in a random place in the array

	// Sort array so binary search will work
	sort(testArray, testArray + SIZE);

	cout << "Array: "; for (int i : testArray) cout << i << ' '; cout << endl;
	cout << "Target: " << target << endl;

	int linCount = linearSearch(testArray, target, SIZE);
	int binCount = binarySearch(testArray, target, SIZE);
	cout << "Linear search took: " << linCount << " comparisons to find the value." << endl;
	cout << "Binary search took: " << binCount << " comparisons to find the value." << endl;

	return 0;
}

int linearSearch(int a[], int t, int l)
{
	for (int i = 0; i < l; i++)
		if (a[i] == t)
			return ++i;
	return -1;
}

int binarySearch(int a[], int t, int l)
{	
	int count = 0;
	int first = 0;
	int last = l - 1;
	int middle;
	
	do
	{
		middle = (first + last) / 2;
		count++;
		if (a[middle] == t)
			return count;
		else if (a[middle] < t)
			first = middle + 1;
		else
			last = middle - 1;
	} while (first <= last);

	return -1;
}