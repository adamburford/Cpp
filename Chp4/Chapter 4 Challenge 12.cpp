/*		Adam Burford
		CGS2402 - Programming in  C++ for Business: Online#1413
		May 31, 2016 ©
		Chapter 4 - Programming Challenge #12
*/

#include <iostream>
using namespace std;

int main()
{
	int unitsSold = 0;
	int discount = 0;
	double subTotal = 0.0;
	double discountTotal = 0.0;
	double total = 0.0;

	cout << "Software Sale Calculator" << endl << endl;
	cout << "Enter the number of  units sold: ";

	cin >> unitsSold;
	cout << endl;

	if (unitsSold > 0)
	{
		if (unitsSold >= 100)
			discount = 50;
		else if (unitsSold >= 50)
			discount = 40;
		else if (unitsSold >= 20)
			discount = 30;
		else if (unitsSold >= 10)
			discount = 20;

		cout << "You sold: " << unitsSold << " units @ $99 each with a " << discount << "% discount." << endl;
		subTotal = (unitsSold * 99);
		cout << "Subtotal: $" << subTotal << endl;
		discountTotal = subTotal * (((double)discount) / 100);
		printf("Volume Discount: $%.2f\n", discountTotal);
		total = subTotal - discountTotal;
		printf("Total Sale: $%.2f\n\n", total);

	}
	else if (unitsSold == 0)
		cout << "Invalid input: no units sold" << endl;
	else if (unitsSold < 0)
		cout << "Invalid input: can not sell negative units" << endl;

	return 0;
}