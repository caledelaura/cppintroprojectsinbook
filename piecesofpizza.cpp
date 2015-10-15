#include <iostream>

using namespace std;
int main() 
{
	//Variables
	double pizzaRadius = 0.0;
	double areaOfPizza = 0.0;
	double slicesOfPizza= 0.0;
	double pizzaDiameter = 0.0;
	//Constants
	const double PI = 3.14;
	const double SLICE_AREA= 14.13;
	
	//Gathering necessary variable value for radius
	cout << "Enter the radius of the pizza: ";
	cin >> pizzaRadius;
	//Calculate pizza diameter
	pizzaDiameter = pizzaRadius * 2;
	//calculate area of pizza and divide area of slices into pizza area
	areaOfPizza = PI * (pizzaDiameter / 2.0) * (pizzaDiameter / 2.0);
	slicesOfPizza = areaOfPizza / SLICE_AREA;
	//Display amount of pizza slices
	cout <<"You will have this many slices: " << slicesOfPizza << endl;
	

}
