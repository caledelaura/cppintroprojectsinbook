#include <iostream>
#include <iomanip>

using namespace std;

void calcAverage(double num1, double num2, double num3, double num4, double &avg);

int main() {
	double num1 = 0.0;
	double num2 = 0.0;
	double num3 = 0.0;
	double num4 = 0.0;
	double avg = 0.0;
	
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	cout << "Enter third number: " << endl;
	cin >> num3;
	cout << "Enter fourth number: " << endl;
	cin >> num4;
	
	calcAverage(num1, num2, num3, num4, avg);
	
	return 0;
	
}

//*****function definitions*****
void calcAverage(double num1, double num2, double num3, double num4, double &avg){
	double total = 0.0;
	total = num1 + num2 + num3 + num4;
	avg = total / 4;
	cout << "Average: " << avg << endl;
}
