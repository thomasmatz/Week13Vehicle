//#pragma once
/*
Tom Matz
Vehicle class header file
11/18/2022
*/
#ifndef Vehicle_C_H
#define Vehicle_C_H

#include <string>

using namespace std;

class Vehicle_C
{
public:
	Vehicle_C();
	//~Vehicle_C();
	void Set_Mfr(string mfr);
	void Set_YearB(string yB);
	string Get_Mfr() const;
	string Get_YearB() const;
	void Display_Info() const;

private:
	string manufacturer;
	string yearBuilt;
};

#endif // !Vehicle_C_H

