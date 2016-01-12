#include <iostream>
#include <iomanip>

using namespace std;

//function prototype
void calcFedTaxes(double &fedTax, double &FICATax, double &salary);
void calcNetPay(double salary, double fedTax, double FICATax, double &netPay);
void displayInfo(double fedTax, double FICATax, double &netPay);

const double FWT = .2;
const double FICA = .08;

int main() {
	//declare variables
	double salary = 0.0;
	double fedTax = 0.0;
	double FICATax = 0.0;
	double netPay = 0.0;
	
	
	//User input weekly salary
	cout << "Please enter your weekly salary before taxes: " << endl;
	cin >> salary;
	
	//call functions
	calcFedTaxes(fedTax, FICATax, salary);
	calcNetPay(salary, fedTax, FICATax, netPay);
	//cout << netPay << endl;
	displayInfo(fedTax, FICATax, netPay);
	
	return 0;
}

//****function definitions****
void calcFedTaxes(double &fedTax, double &FICATax, double &salary){

	fedTax = salary * FWT;
	FICATax = salary * FICA;	
}
void calcNetPay(double salary, double fedTax, double FICATax, double &netPay){
	netPay = salary - fedTax - FICATax;
}
void displayInfo(double fedTax, double FICATax, double &netPay){
	cout << "Net Pay: " << netPay << endl;
	cout << "Federal Tax Withheld: " << fedTax << endl;
	cout << "FICA Tax Withheld: " << FICATax << endl;
}
