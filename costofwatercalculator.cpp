#include <iostream>

using namespace std;
int main()
{
	//Declare variables
	double currReading = 0.0;
	double prevReading = 0.0;
	double newGallons = 0.0;
	double adjGallons = 0.0;
	double totalCost = 0.0;
	
	//Declare constants
	const double MIN_CHARGE = 16.67;
	
	//Input current and previous readings
	cout << "Enter previous reading: ";
	cin >> prevReading;
	cout << "Enter current reading: ";
	cin >> currReading;
	
	//Calculate total gallons used
	newGallons = currReading - prevReading;
	//Calculate price per gallon
	adjGallons = newGallons / 1000;
	totalCost = adjGallons * 7;
	
	//Compare minimum charge of $16.67 to per gallon charge
	if (MIN_CHARGE > totalCost)
	{
		totalCost = MIN_CHARGE;
	}
	
	//Output Totals
	cout << "Total gallons used: " << newGallons << endl;
	cout << "Total cost for water used: $" << totalCost << endl;
	
	return 0;
	
}
