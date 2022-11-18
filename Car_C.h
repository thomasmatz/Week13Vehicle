//#pragma once
/*Car class header file
I cloned the repository from github
in order to get the project open
11/18/2022
*/
#ifndef Car_C_H
#define Car_C_H

#include "Vehicle_C.h"

class Car_C : public Vehicle_C
{
private:
	int numDoors;
public:
	Car_C();
	void Set_NumDoors(int);
	int Get_NumDoors() const;//the  const keyword tells the compiler that the
			//calling object is a constant (so do not allow changes to its data)
	void Display_Info() const;
};










#endif // !Car_C_H

