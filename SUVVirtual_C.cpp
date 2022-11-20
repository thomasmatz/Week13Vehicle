/*
SUVvirtual Class Implementation file
11/19/2022
*/

#include "SUVVirtual_C.h"
#include <iostream>

SUVVirtual_C::SUVVirtual_C() : CarVirtual_C()
{
	gasTankCapacity = 0;
}
void SUVVirtual_C::Set_GasTankCapacity(double gasTC)
{
	gasTankCapacity = gasTC;
}
double SUVVirtual_C::Get_GasTankCapacity() const
{
	return gasTankCapacity;
}
void SUVVirtual_C::Display_Info() const
{
	cout << "\n\t\tPolymorphism - binding to SUV object.";
	cout << "\n\t\tand the Display_Info function is being";
	cout << "\n\t\t\toverridden by the SUVVirtual class.";
	cout << "\nThe make of the SUV is: ";
	cout << Get_Mfr();
	cout << "\nThe year built of the SUV is: ";
	cout << Get_YearB();
	cout << "\nThe number of doors of the SUV are: ";
	cout << Get_NumDoors();
	
	cout << "\nThe gas tank capacity of the SUV is: ";
	cout << gasTankCapacity;
}