#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int principal   =1000;
    double rate     =.03;
    int years       =1;
    double balance  =0.0;
    
    
    do
    {
        balance = principal * pow(1 + rate, years);
        cout << "Year " << years << ":" << endl;
        cout << "  $" << balance << endl;
        
        years += 1;
    } while (years < 6);
    
    return 0;

}
