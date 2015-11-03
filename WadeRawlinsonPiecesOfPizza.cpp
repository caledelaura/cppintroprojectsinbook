//
//  main.cpp
//  intermediate4-13
//
//  Created by Wade Rawlinson on 10/13/15.
//  Copyright (c) 2015 Wade Rawlinson. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    // Declaring Variables
    const double AREA_OF_PIZZA_SLICE = 14.13;
    const double PI = 3.14;
    double radiusOfPizza = 0.0;
    double areaOfPizza = 0.0;
    double numberOfSlicesInPizza = 0.0;
    
    // Recieve Users Input
    cout << "Enter The Radius Of The Pizza: ";
    cin >> radiusOfPizza;
    
    // Calculations
    areaOfPizza = radiusOfPizza * radiusOfPizza * PI;
    numberOfSlicesInPizza = areaOfPizza / AREA_OF_PIZZA_SLICE;
    
    // Display the Output
    cout << "The Number Of Pizza Slices That Can Fit Into This Pizza Are: " << numberOfSlicesInPizza << "." << endl;
    
    return (0);
}
