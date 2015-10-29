#include <iostream>

using namespace std;
int main()
{
    
    //declare variables
    double item1 = 0.0;
    double item2 = 0.0;
    double discItem = 0.0;
    double itemTotals = 0.0;
    double totalAmountDisc = 0.0;
    
    
    //declare constants
    const double DISC = .5;
    
    //Input item amounts
    cout << "Enter price of the first item: ";
    cin >> item1;
    cout << "Enter price of the second item: ";
    cin >> item2;
    
    //Determine lower priced item
    if (item2 > item1)
    {
        discItem = item1;
    }
    else
    {
        discItem = item2;
    }
    
    //Calculate amount price after discount
    discItem = discItem * DISC;
    //Calculate total before discount
    itemTotals = item1 + item2;
    //Calculate total with discount
    totalAmountDisc = itemTotals - discItem;
    
    //Output total before discount
    cout << "Total amount before discounts: $" << itemTotals << endl;
    //Output total amount with discount
    cout << "Total with discount applied: $" << totalAmountDisc << endl;
    
    
    return 0;
    
}
