// 03. Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct my_car
{
	std::string brand;
	std::string model;
	int year;
};

int main()
{
	my_car car1;
	car1.brand = "Renault";
	car1.model = "Laguna";
	car1.year = 1997;
	my_car car2;
	car2.brand = "Citroen";
	car2.model = "C4";
	car2.year = 2005;
	my_car car3;
	car3.brand = "Honda";
	car3.model = "FRV";
	car3.year = 2007;

	std::cout << car1.brand << " - " << car1.model << " - Year: " << car1.year << std::endl;
	std::cout << car2.brand << " - " << car2.model << " - Year: " << car2.year << std::endl;
	std::cout << car3.brand << " - " << car3.model << " - Year: " << car3.year << std::endl;
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
