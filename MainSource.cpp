/*
Thomas Matz
Main Source file
for SUV homework
CIS 1202.201
11/18/2022
*/

#include "SUV_C.h"
#include "SUVVirtual_C.h"

#include <iostream>

void Polymorphism_Routine();

int main()
{
	string manufacturer, yearBuilt;
	Vehicle_C autoSimple;
	cout << "\n\t\tThis program will demonstrate";
	cout << " a redefined function\n\t'Display_Info' in";
	cout << " the child and the grandchild classes.";
	cout << "\n\nEnter the make of the vehicle> ";
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the vehicle>";
	getline(cin, yearBuilt);
	
	autoSimple.Set_Mfr(manufacturer);
	autoSimple.Set_YearB(yearBuilt);
	autoSimple.Display_Info();

	int numDoors;
	Car_C autoIntermediate;
	cout << "\n\nEnter the make of the car> ";
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
	
	cout << "\n\nEnter the make of the SUV.> ";
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

	bool response;
	cout << "\nAs a bonus, would you like to run this";
	cout << " program again...demonstrating polymorphism?";
	cout << "\n Enter 1 if yes, 0 if no.> ";
	cin >> response;
	cin.ignore();

	if (response) Polymorphism_Routine();

	cout << endl;
	system("pause");
	return(0);
}
/*
************************************************************
**************************************************************
**************************************************************
*/

void Polymorphism_Routine()
{
	//Polymorphism requires the use of virtual functions
	//  and pointers to class objects (or the use of 
	// a reference parameter in the function)
	
	//There is only one pointer variable necessary
	// for the polymorphism approach.
	// It is of Class VehicleVirtual

	VehicleVirtual_C *auto_ptr = new VehicleVirtual_C;
	
	cout << "\n\t\tThis program will demonstrate";
	cout << " two overridden functions,\n\t'Set_Info' and 'Display_Info', in";
	cout << " the child and the grandchild classes.";
	cout << "\n\t...Binding to a Vehicle class object.";
	auto_ptr->Set_Info();//Set_Info is a virtual function
		//auto_ptr is a Vehicle class pointer variable
	
	//Output_To_Terminal(auto_ptr);
	auto_ptr->Display_Info();

	auto_ptr = new CarVirtual_C;
	//the VehicleVirtual object pointer now references
	// a CarVirtual object
	cout << "\n\t...Binding to a Car class object.";
	
	auto_ptr->Set_Info();//Set_Info is a virtual function
		//auto_ptr is a Vehicle class pointer variable

	//Output_To_Terminal(auto_ptr);
	auto_ptr->Display_Info();

	auto_ptr = new SUVVirtual_C;

	//the VehicleVirtual object pointer now references
	// an SUVVirtual object
	
	cout << "\n\t...Binding to an SUV class object.";

	auto_ptr->Set_Info();//Set_Info is a virtual function
		//auto_ptr is a Vehicle class pointer variable

	//Output_To_Terminal(auto_ptr);
	auto_ptr->Display_Info();

	delete auto_ptr;	
}

