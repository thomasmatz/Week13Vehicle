/*
Car class implementation file
for the virtual version.
this will demonstrate polymorphism
11/18/2022
*/
#include "CarVirtual_C.h"
#include <iostream>

using namespace std;

CarVirtual_C::CarVirtual_C() : VehicleVirtual_C()// default constructor
{
	numDoors = 0;
}
void CarVirtual_C::Set_NumDoors(int nD)
{
	numDoors = nD;
}
int CarVirtual_C::Get_NumDoors() const
{
	return numDoors;
}
void CarVirtual_C::Display_Info() const
{
	cout << "\n\t\tPolymorphism - binding to Car object.";
	cout << "\n\t\tand the Display_Info function is being";
	cout << "\n\t\t\toverridden by the CarVirtual class.";
	cout << "\nThe make of the car is: ";
	cout << Get_Mfr();
	cout << "\nThe year built of the car is: ";
	cout << Get_YearB();
	
	cout << "\n...and the number of doors is: ";
	cout << numDoors;
}