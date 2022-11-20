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
void Output_To_Terminal(VehicleVirtual_C*);

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

	if (response) Polymorphism_Routine();

	cout << endl;
	system("pause");
	return(0);
}
void Polymorphism_Routine()
{
	//Polymorphism requires the use of virtual functions
	//  and pointers to class objects (or the use of 
	// a reference parameter in the function)
	string manufacturer, yearBuilt;
	VehicleVirtual_C *autoBasic = new VehicleVirtual_C;
	cout << "\n\t\tThis program will demonstrate";
	cout << " an overridden function,\n\t'Display_Info', in";
	cout << " the child and the grandchild classes.";
	cout << "\n\nEnter the make of the vehicle> ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the vehicle>";
	getline(cin, yearBuilt);
	cout << "\n\t...Declaring a Vehicle class object.";

	autoBasic->Set_Mfr(manufacturer);
	autoBasic->Set_YearB(yearBuilt);
	
	Output_To_Terminal(autoBasic);

	int numDoors;
	CarVirtual_C *autoValue=new CarVirtual_C;
	cout << "\n\nEnter the make of the car> ";
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the car>";
	getline(cin, yearBuilt);
	cout << "\nEnter the number of doors of the car>";
	cin >> numDoors;
	cout << "\n\t...Declaring and setting a Car class object.";

	autoValue->Set_Mfr(manufacturer);
	autoValue->Set_YearB(yearBuilt);
	autoValue->Set_NumDoors(numDoors);
	//call display
	Output_To_Terminal(autoValue);

	double gasTankCapacity;
	SUVVirtual_C *autoBigSporty=new SUVVirtual_C;

	cout << "\n\nEnter the make of the SUV.> ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "\nEnter the year built of the SUV.> ";
	getline(cin, yearBuilt);
	cout << "\nEnter the number of doors of the SUV.> ";
	cin >> numDoors;
	cout << "\nEnter the gas tank capacity of the SUV.> ";
	cin >> gasTankCapacity;
	cout << "\n\t...Declaring and setting an SUV class object.";

	autoBigSporty->Set_Mfr(manufacturer);
	autoBigSporty->Set_YearB(yearBuilt);
	autoBigSporty->Set_NumDoors(numDoors);
	autoBigSporty->Set_GasTankCapacity(gasTankCapacity);
	
	Output_To_Terminal(autoBigSporty);

	delete autoBasic;
	delete autoValue;
	delete autoBigSporty;
}
void Output_To_Terminal(VehicleVirtual_C *vehObject)
{
	//Display_Info is a virtual function
	//binding of the object parameter to this function
	// will occur at runtime.
	vehObject->Display_Info();
}
