#include <iostream>
#include <cmath>

using namespace std;
int main() {
	
	double bonusRate = 0.0;
	double bonus = 0;
	int number = 0;
	double justBonus = 0;
	
	int salesPerson [10][2] ={{7900, },
							  {9500, },
							  {3150, },
							  {1530, },
							  {3000, },
							  {21300, },
							  {2450, },
							  {14200, },
							  {14400, },
							  {2900, }};
	cout << "Enter current bonus rate in decimal form:  "  << endl;	
	cin >> bonusRate;
	
	for (int x = 0; x < 10; x += 1){
		bonus = salesPerson[x][0] * bonusRate;
		justBonus = salesPerson[x][0] * bonusRate;
		bonus += salesPerson[x][0];
		salesPerson[x][1] = bonus;
		number +=1;
		cout << "Sales person " << number << ": \t" << "Total sales: $" << salesPerson[x][0] << "\t" << "Total bonus: $" << justBonus  << "\t" << "Total paid: $" << salesPerson[x][1] << endl;			
	}						
}
