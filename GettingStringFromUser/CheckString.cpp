/*
This code checks strings entered by user according to size of them.
Purpose of code is use string functions in code.

Developer = Barış Someroğlu
Date = 19.06.2024 - 07:00 pm
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Change console colour
	system("color E9");

	string UserString;

	// Reserve capacity for string
	UserString.reserve(5);

	cout << "Capacity in Memory for String = " << UserString.capacity() << endl; // Check capacity

	cout << "\nPlease Enter 3 String Which Size is 5" << endl;

	int Counter = 0;

	while (Counter < 3)
	{
		cout << "\nPlease Enter " << Counter + 1 << ". String = ";
		cin >> UserString;

		if (UserString.length() == 5) // Check size
		{
			cout << "\nYou Entered a Right String!" << endl;

			Counter++;
		}

		else
		{
			cout << "\nPlease Enter a Right String!" << endl;
		}
	}

	cout << "\nJob is Done!" << endl;

	UserString.clear(); // Clear string content

	return 0;
}