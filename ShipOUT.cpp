#include <fstream>
#include <iostream>

#include "Ship.h"

using namespace std;

void Ship::Out(ofstream &ofst)
{
	ofst << "It is Ship" << endl << "watercapacity = " << water << endl << "Type of Ship: ";
	if (typeship == Lainer) 
	{
		ofst << "Lainer" << endl;
	}
	else
	{
		if (typeship == Tanker)
		{
			ofst << "Tanker" << endl;
		}
		else
		{
			if (typeship == Tug)
			{
				ofst << "Tug" << endl;
			}
			else 
			{
				ofst << "Incorrect type of Ship" << endl;
			}
		}
	}

	OutCommon(ofst);
}