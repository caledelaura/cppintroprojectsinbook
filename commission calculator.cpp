#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
	
	//declare variables
	double monthlySales = 0.0;
	double commissionRate = 0.0;
	double bonusAmount = 0.0;
	
	//Users input monthly sales amount
	cout << "Enter total monthly sales: ";
	cin >> monthlySales;
	
	//determine commission rate
	if (0 <= monthlySales && monthlySales <= 19999.99)
	{
		commissionRate = .04;
	}
	else if (20000 <= monthlySales && monthlySales <= 29999.99)
	{
		commissionRate = .05;
	}
	else if (30000 <= monthlySales && monthlySales <= 39999.99)
	{
		commissionRate = .06;
	}
	else if (40000 <= monthlySales && monthlySales <= 49999.99)
	{
		commissionRate = .07;
	}
	else if (monthlySales >= 50000)
	{
		commissionRate = .09;
	}
	else if (monthlySales < 0)
	{
		commissionRate = .00;
	}
	
	//calculate
	bonusAmount = monthlySales * commissionRate;
	cout << fixed << setprecision(2);
	cout << "Bonus total: $" << bonusAmount << endl;
	
}
