#include <iostream>
using namespace std;

int main()
{
	int searchFor = 0;
	int students = 0;
	//declare array
	int scores[20] = {90, 54, 23, 75, 67, 89, 99, 100, 34, 99, 
					  97, 76, 73, 72, 56, 73, 72, 20, 86, 99};
	
	cout << "Enter -1 to end the program" << endl;			
	cout << "Enter score 0-100 " << endl;
	cin >> searchFor;
	
	
	while (searchFor <= 100){
			if (searchFor == -1){
				return 0;
			}
		//search the array
		for (int sub = 0; sub < 20; sub += 1)
			    if (scores[sub] == searchFor)
				students += 1;
			//end if
		//end for
		
		//display the search results
		cout << "Number of students with that score: " << students << endl;
		return 0;
	}				

}	//end of main function
