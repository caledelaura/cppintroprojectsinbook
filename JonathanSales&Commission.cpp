#include <iostream>
using namespace std;

int main() {
    
    //declare variables
    const double COMMISSION_RECEIVED = .25;
    int surfaceBooksSold = 0;
    double surfaceBookPrice = 0.0;
    double commissionForOne = 0.0;
    double totalCommission = 0.0;
    
    //enter the input items
    cout << "Enter the number of top spec SurfaceBooks sold: " << endl;
    cin >> surfaceBooksSold;
    cout << "Enter the price of one top spec SurfaceBook: " << endl;
    cin >> surfaceBookPrice;
    
    //calculate the totals
    commissionForOne = COMMISSION_RECEIVED * surfaceBookPrice;
    totalCommission = commissionForOne * surfaceBooksSold;
    
    //display the output
    cout << "Total commission received: $" << totalCommission << endl;
    
    return 0;
} //end of main function
