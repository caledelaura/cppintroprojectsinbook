#include <iostream>

using namespace std;
int main() {
    //declare variables
    double radius = 0.0;
    const double PI = 3.14;
    const double AREA_OF_SLICE = 14.13;
    double radiusSquared = 0.0;
    double areaOfPizza = 0.0;
    double slices = 0.0;
    
    //enter input items
    cout << "Enter the radius of the pizza: " << endl;
    cin >> radius;
    
    //calculate the amount of slices
    radiusSquared = radius * radius;
    areaOfPizza = PI * radiusSquared;
    slices = areaOfPizza / AREA_OF_SLICE;
    
    //display the output item
    cout << "Number of slices: " << slices << endl;
    
    
    return 0;
} //end of main function
