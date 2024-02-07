// chapter3Problem2Attempt#2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream inFile;
	std::ofstream outFile;
	inFile.open("TextFile3.txt");
	outFile.open("SalaryOut.txt");
	if (inFile.is_open()) std::cout << "hey";
	outFile << std::fixed << std::showpoint;
	outFile << std::setprecision(2);
	double salary;
	double updatedSalary;
	double increase;
	std::string firstName;
	std::string lastName;
	inFile >> lastName >> firstName;
	inFile >> salary >> increase;
	outFile << "Employee Name : " << firstName << " " << lastName << std::endl;
	updatedSalary = (salary * increase) + salary;
	outFile << "Updated Salary : " << std::endl;
	outFile << firstName << 77.67 * 13.43;
	std::cout << firstName;
	inFile.close();
	outFile.close();
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
