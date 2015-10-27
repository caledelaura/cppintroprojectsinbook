#include <iostream>
using namespace std;

int main()
{
    //Declared variables
    int orchestraSeats = 0;
    int mainFloorSeats = 0;
    int balconySeats = 0;
    int orchestraTotal = 0;
    int mainFloorTotal= 0;
    int balconyTotal = 0;
    int totalRevenue = 0;
    //Declared constants
    const int ORCHESTRA_PRICE= 25;
    const int MAIN_FLOOR_PRICE= 30;
    const int BALCONY_PRICE= 15;
    
    
    //Enter number of seats sold
    cout << "Enter number of orchestra seats: ";
    cin >> orchestraSeats;
    cout << "Enter number of main floor seats: ";
    cin >> mainFloorSeats;
    cout << "Enter number of balcony seats: ";
    cin >> balconySeats;
    
    //Calculate total revenue from sold seats
    orchestraTotal = orchestraSeats * ORCHESTRA_PRICE;
    mainFloorTotal = mainFloorSeats * MAIN_FLOOR_PRICE;
    balconyTotal = balconySeats * BALCONY_PRICE;
    
    //Display revenue totals
    totalRevenue = orchestraTotal + mainFloorTotal + balconyTotal;
    cout << "Total revenue: $ " << totalRevenue << endl;
    cout << "Total revenue from orchestra seats: $" << orchestraTotal << endl;
    cout << "Total revenue from main floor seats: $" << mainFloorTotal << endl;
    cout << "Total revenue from balcony seats: $"  << balconyTotal << endl;
    
    return 0;
}
