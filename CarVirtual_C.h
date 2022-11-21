//#pragma once
/*CarVirtual class header file
This will demonstrate a virtual function
and polymorphism
11/19/2022
*/
#ifndef CarVirtual_C_H
#define CarVirtual_C_H

#include "VehicleVirtual_C.h"

class CarVirtual_C : public VehicleVirtual_C
{
private:
	int numDoors;
public:
	CarVirtual_C();
	void Set_NumDoors(int);
	int Get_NumDoors() const;//the  const keyword tells the compiler that the
	//calling object is a constant (so do not allow changes to its data)
	virtual void Display_Info() const;
	virtual void Set_Info();
};

#endif