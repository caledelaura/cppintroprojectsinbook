#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{

	//declare variables
	double weight = 0.0; 
	double dailyCalories = 0.0;
	char gender;
	string activityLevel;
	
	
	//Input user gender, weight, activity level
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Please enter 'F' for Female or 'M' for Male: ";
	cin >> gender;
	cout << "Would you say your activity level is 'moderate' or 'inactive'? ";
	cin >> activityLevel;
	
	
	//determine calculations based on activity level
	if (gender == 'F' || gender == 'f')
	{
		if (activityLevel == "moderate")
		{
			dailyCalories = weight * 12;
		}
		if (activityLevel == "inactive")
		{
			dailyCalories = weight * 10;
		}
	}
	
	else if (gender == 'M' || gender == 'm')
	{
		if (activityLevel == "moderate")
		{
			dailyCalories = weight * 15;
		}
		if (activityLevel == "inactive")
		{
			dailyCalories = weight * 13;
		}
	}
	
	//Display daily calories needed to maintain current weight 
	cout << "You need " << dailyCalories << " daily calories to maintain your current weight" << endl;
	
}
