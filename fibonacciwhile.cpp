#include <iostream>

using namespace std;
int main()
{
	int first = 1;
	int prev = 0;
	int temp = 0;
	
	while (first < 20)
	{
			first = first + prev;
			temp = first;
			prev = temp + prev;

		
			cout << temp << endl;
			cout << prev << endl;
	}
	
}
