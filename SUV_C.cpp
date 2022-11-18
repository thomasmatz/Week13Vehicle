/*
SUV Class Implementation file
11/18/2022
*/

#include "SUV_C.h"
#include <iostream>

SUV_C::SUV_C() : Car_C()
{
	gasTankCapacity = 0;
}
void SUV_C::Set_GasTankCapacity(double gasTC)
{
	gasTankCapacity = gasTC;
}
double SUV_C::Get_GasTankCapacity() const
{
	return gasTankCapacity;
}
void SUV_C::Display_Info() const
{
	cout << "\nThe make of the SUV is: ";
	cout << Get_Mfr();
	cout << "\nThe year built of the SUV is: ";
	cout << Get_YearB();
	cout << "\nThe number of doors of the SUV are: ";
	cout << Get_NumDoors();
	cout << "\nThe gas tank capacity of the SUV is: ";
	cout << gasTankCapacity;
}