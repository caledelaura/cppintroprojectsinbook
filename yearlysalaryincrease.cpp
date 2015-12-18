#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	
	int salary = 0;
	int years = 1;
	int totalCommission = 0.0;
	
	cout << "Enter salary: $" << endl;
	cin >> salary;
		
	do 
	{
		cout << "Year " << years << ":" << endl;
		for (double rate = .03; rate < .07; rate += .01){
			totalCommission = salary * pow(1 + rate, years);
			cout << " Rate " << rate * 100 << "%: $";
			cout << setprecision(2) << totalCommission << endl;
		}
		
		years += 1;
	} while (years < 4);
	return 0;
}
