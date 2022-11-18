/*
Tom Matz
Vehicle Class Implementation file
11/17/2022
*/

#include "Vehicle_C.h"
#include <iostream>

Vehicle_C::Vehicle_C()
{
	manufacturer = "";
	yearBuilt = "";
}
void Vehicle_C::Set_Mfr(string mfr)
{
	manufacturer = mfr;
}
void Vehicle_C::Set_YearB(string yB)
{
	yearBuilt = yB;
}
string Vehicle_C::Get_Mfr() const
{
	return manufacturer;
}
string Vehicle_C::Get_YearB() const
{
	return yearBuilt;
}
void Vehicle_C::Display_Info() const
{
	cout << "\nThis vehicle object has a make: ";
	cout << manufacturer;
	cout << "\n...and the vehicle year built is: ";
	cout << yearBuilt;
}