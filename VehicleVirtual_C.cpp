/*
Tom Matz
Vehicle Class Implementation file
with a virtual function
11/19/2022
*/

#include "VehicleVirtual_C.h"
#include <iostream>

VehicleVirtual_C::VehicleVirtual_C()
{
	manufacturer = "";
	yearBuilt = "";
}
void VehicleVirtual_C::Set_Mfr(string mfr)
{
	manufacturer = mfr;
}
void VehicleVirtual_C::Set_YearB(string yB)
{
	yearBuilt = yB;
}
string VehicleVirtual_C::Get_Mfr() const
{
	return manufacturer;
}
string VehicleVirtual_C::Get_YearB() const
{
	return yearBuilt;
}
void VehicleVirtual_C::Display_Info() const
{
	cout << "\n\t\tDynamic binding to a Vehicle object";
	cout << "\nThis vehicle object has a make: ";
	cout << Get_Mfr();
	cout << "\n...and the vehicle year built is: ";
	cout << Get_YearB();
}
void VehicleVirtual_C::Set_Info()
{
	string mfr, yrBlt;
	cout << "\nEnter the manufacturer of the vehicle>";
	getline(cin, mfr);
	cout << "\nEnter the year built of the vehicle>";
	getline(cin, yrBlt);
	
	Set_Mfr(mfr);
	Set_YearB(yrBlt);
}