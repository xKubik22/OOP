#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;

void ship::Out(ofstream &ofst)
{
	ofst << "It is ship" << endl << "watercapacity = " << water << endl << "Type of ship: ";
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
				ofst << "Incorrect type of ship" << endl;
			}
		}
	}

	OutCommon(ofst);
}