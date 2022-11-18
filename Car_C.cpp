/*
Car class implementation file
11/18/2022
*/
#include "Car_C.h"
#include <iostream>

using namespace std;

Car_C::Car_C() : Vehicle_C()// default constructor
{
	numDoors = 0;
}
void Car_C::Set_NumDoors(int nD)
{
	numDoors = nD;
}
int Car_C::Get_NumDoors() const
{
	return numDoors;
}
void Car_C::Display_Info() const
{
	cout << "\nThe make of the car is: ";
	cout << Get_Mfr();
	cout << "\nThe year built of the car is: ";
	cout << Get_YearB();
	cout << "\n...and the number of doors is: ";
	cout << numDoors;
}
