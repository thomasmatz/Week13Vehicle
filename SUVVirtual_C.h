//#pragma once
/*
Tom Matz
SUVvirtual class header file
11/19/2022
*/
#ifndef SUVVirtual_C_H
#define SUVVirtual_C_H

#include "CarVirtual_C.h" //CarVirtual_C is the parent
class SUVVirtual_C : public CarVirtual_C
{
public:
	SUVVirtual_C();
	
	void Set_GasTankCapacity(double);
	double Get_GasTankCapacity() const;
	virtual void Display_Info() const;
	virtual void Set_Info();

private:
	double gasTankCapacity;
};
#endif