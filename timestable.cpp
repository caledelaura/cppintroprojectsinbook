#include <iostream>

using namespace std;
int main() {	
	for (int row = 1; row < 5; row += 1){
		cout << row << ' ';
		for (int x = 0; x <= 9; x ++){
		cout << row * x << ' ';
		}
		cout << ' ' << endl;
		}	
	return 0;	
}
