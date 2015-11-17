#include <iostream>

using namespace std;
int main()
{
    //Declare variables
    double owes = 0.0;
    double paid = 0.0;
    double change = 0.0;
    int quarters = 0.0;
    int dimes = 0.0;
    int nickels = 0.0;
    int dollars = 0.0;
    //Declare constants
    const double DOLLAR = 1.00;
    const double QUARTER = .25;
    const double DIME = .10;
    const double NICKEL = .05;
    
    
    
    //Input current and previous readings
    cout << "How much does the customer owe? ";
    cin >> owes;
    cout << "How much did the customer pay? ";
    cin >> paid;
    
    if (paid < owes)
    {
        cout << "Sorry you did not pay the full amount" << endl;
    }
    
    //Calculate change
    change = paid - owes;
    cout << "Customers change: $" << change << endl;
    //Calculate dollars, quarters, nickels, dimes, & pennies
    dollars = change / DOLLAR;
    change = change - dollars;
    quarters = change / QUARTER;
    change = change - (quarters * .25);
    dimes = change / DIME;
    change = change - (dimes * .10);
    nickels = change / NICKEL;
    change = change - (nickels * .05);
    change = change * 100;
    
    
    
    //Display change all together and by coins
    
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters:  " << quarters << endl;
    cout << "Dimes:  " << dimes << endl;
    cout << "Nickels:  " << nickels << endl;
    cout << "Pennies:  " << change << endl;
    
    return 0;
    
}
