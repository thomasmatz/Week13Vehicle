//#pragma once
/*
Tom Matz
Vehicle class header file
The display class is made virtual.
11/19/2022
*/
#ifndef VehicleVirtual_C_H
#define VehicleVirtual_C_H

#include <string>
#include <iostream>

using namespace std;

class VehicleVirtual_C
{
public:
	VehicleVirtual_C();
	
	void Set_Mfr(string);
	void Set_YearB(string);
	string Get_Mfr() const;
	string Get_YearB() const;
	virtual void Display_Info() const;
	virtual void Set_Info();

private:
	string manufacturer;
	string yearBuilt;
};

#endif