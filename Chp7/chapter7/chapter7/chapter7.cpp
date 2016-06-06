/*		Adam Burford
CGS2402 - Programming in  C++ for Business: Online#1413
June 04, 2016 ©
Chapter 7 Assignment
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// Step 1: Create Arrays
	double dArr[5];
	long lArr[7] = { 100000L, 134567L, 123456L, 9L, -234567L, -1L, 123489L };
	int iArr[3][5];
	char sName[31] = "Adam Burford";

	// Step 2: Define Variables
	short cnt1 = 0;
	short cnt2 = 0;
	long double total = 0.0;

	// Step 3: Define highest
	long highest = 0;

	// Step 4: generate random numbers for dArr
	srand((unsigned)time(NULL));

	cout << "Contents of dArray are now random doubles from 0 to 1000: " << endl << "dArray: ";
	for (double &d : dArr)
	{
		d = ((double)rand() / RAND_MAX) * 1000.0;			// Random real number from 0 - 1000
		cout << d << ' ';
	}
	cout << endl;

	// Step 5: sum dArr and store in total
	total = 0.0;
	for (double d : dArr)
		total += d;

	// Step 6: print the total and the average of dArr
	cout << fixed << "The total sum of elements in dArr is: " << total << endl;
	int length = sizeof(dArr) / sizeof(dArr[0]);
	cout << fixed << "The average of the elements in dArr is: " << total / length << endl << endl;

	// Step 7: find highest number in lArray
	for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++)
		if (lArr[cnt1] > highest)
			highest = lArr[cnt1];

	// Step 8: print out highest number in lArr
	cout << "The highest number in lArr is: " << highest << endl << endl;

	// Step 9: put random numbers from 1 to 53 inclusive in iArr
	for (auto &i : iArr)
		for (auto &j : i)
			j = (rand() % 53) + 1;

	// Step 10: print iArr 3x5 with fixed column width of 5 characters
	cout << "iArr with random numbers (1-53 inclusive) printed 3x5 with fixed width: " << endl;
	for (auto &i : iArr)
	{
		for (auto j : i)
			cout << setw(5) << j;
		cout << endl;

	}

	// Step 11: iArr printed 5x3 with fixed with of 5
	cout << endl << "iArr printed 5x3, columns by column:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(5) << iArr[j][i];
		}
		cout << endl;
	}
	cout << endl;

	// Step 12:
	cout << "Enter a new student name: ";
	cin.getline(sName, 31);

	// Step 13: print each character of sName on it's own line
	cnt2 = 0;
	while (sName[cnt2] != '\0')
	{
		cout << sName[cnt2] << " - " << (unsigned short)sName[cnt2] << endl;				// Not sure if you wanted the number stored in the char or the ascii letter it represents when you asked for ascii value, printed both
		cnt2++;
	}
	cout << endl;

	// Step 14: Copy "Albert Einstein" into sName
	cout << "Changing sName to \"Albert Einstein\" with strcpy_s" << endl;
	strcpy_s(sName, "Albert Einstein");

	// Step 15: Print the 12th character of sName
	cout << "The value of the 12th character of sName is now: " << (unsigned short)sName[11] << " which is \'" << sName[11] << "\' in ASCII" << endl << endl;

	return 0;
}