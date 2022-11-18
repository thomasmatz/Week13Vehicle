/*
Thomas Matz
Main Source file
for SUV homework
CIS 1202.201
11/18/2022
*/

#include "SUV_C.h"

#include <iostream>

int main()
{
	string manufacturer, yearBuilt;
	Vehicle_C autoSimple;

	cout << "\nEnter the make of the vehicle> ";
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the vehicle>";
	getline(cin, yearBuilt);
	
	autoSimple.Set_Mfr(manufacturer);
	autoSimple.Set_YearB(yearBuilt);
	autoSimple.Display_Info();

	int numDoors;
	Car_C autoIntermediate;
	cout << "\nEnter the make of the car> ";
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the car>";
	getline(cin, yearBuilt);
	cout << "\nEnter the number of doors of the car>";
	cin >> numDoors;

	autoIntermediate.Set_Mfr(manufacturer);
	autoIntermediate.Set_YearB(yearBuilt);
	autoIntermediate.Set_NumDoors(numDoors);
	autoIntermediate.Display_Info();

	double gasTankCapacity;
	SUV_C theTraverse;
	
	cout << "\nEnter the make of the SUV.> ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the SUV.> ";
	getline(cin, yearBuilt);
	cout << "\nEnter the number of doors of the SUV.> ";
	cin >> numDoors;
	cout << "\nEnter the gas tank capacity of the SUV.> ";
	cin >> gasTankCapacity;

	theTraverse.Set_Mfr(manufacturer);
	theTraverse.Set_YearB(yearBuilt);
	theTraverse.Set_NumDoors(numDoors);
	theTraverse.Set_GasTankCapacity(gasTankCapacity);
	theTraverse.Display_Info();

	cout << endl;
	system("pause");
	return(0);
}