//#pragma once
/*
Tom Matz
SUV class header file
11/18/2022
*/
#ifndef SUV_C_H
#define SUV_C_H

#include "Car_C.h"//Car_C is the parent
class SUV_C : public Car_C
{
public:
	SUV_C();
	//SUV_C : public();
	//~SUV_C : public();
	void Set_GasTankCapacity(double);
	double Get_GasTankCapacity() const;
	void Display_Info() const;

private:
	double gasTankCapacity;
};

















#endif // !SUV_C_H

