// 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int myNumber = 15;
	string fName = "Ivan";
		string lName = "Ivanov";

	std::cout << "Hi I'm "+fName+" "+lName+".\n";
	std::cout << "I'm " << myNumber << "years old." <<std::endl;

	int x;
	std::cout << "Type a integer: ";
	std::cin >> x;
	std::cout << "The number is: " << x <<std::endl;
	int y, z;
	int sum;
	cout << "Type a Number: ";
		cin >> y;
		cout << "Type a second Number: ";
	std::cin >> z;
	sum = y + z;
	std::cout << "Sum is: " << sum;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
