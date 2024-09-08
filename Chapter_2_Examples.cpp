//This program calculates and displays both the discount amount 
// and the discounted value of an item.

#include <iostream>
using namespace std;

int main()
{
	const double REGULAR_PRICE = 59.95, PERCENT_DISCOUNT = 0.2;
	double discountAmount, reducedPrice;

	//Calculate the discount amount
	discountAmount = REGULAR_PRICE * PERCENT_DISCOUNT ;

	//Calculate the price after discount
	reducedPrice = REGULAR_PRICE - discountAmount ;

	cout << "The discount amount is $" << discountAmount << " ." << endl;
	cout << "The discounted price is $" << reducedPrice << " ." ;

	return 0;

}

