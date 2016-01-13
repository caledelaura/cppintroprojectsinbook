#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	
	int temperatures[7][2] = {};
	
	//declare variables
	int total = 0;
	double highAvg = 0.0;
	double lowAvg = 0.0;
	int high = 0;
	int low = 0;
	int highTempAvg = 0;
	int lowTempAvg = 0;
	int highDay = 1;
	int lowDay = 1;
	
	
	for(int x = 0; x <= 6; x += 1){
		cout << "Enter the high temperature for day " << highDay << ": "<< endl;
		cin >> high;
		temperatures[x][0]=high;
		highTempAvg += high;
		highDay += 1;
		
		cout << "Enter the low temperature for day " << lowDay << ": "<< endl;
		cin >> low;
		temperatures[x][1]=low;
		lowTempAvg += low;
		lowDay += 1;
		}
		
		highAvg = highTempAvg / 7;
		cout << "Average high temperature for the last 7 days: " << highAvg << " degrees" << endl;
		lowAvg = lowTempAvg / 7;
		cout << "Average low temperature for the last 7 days: " << lowAvg << " degrees" << endl;
		
}
