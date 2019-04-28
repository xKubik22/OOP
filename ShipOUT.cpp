#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;

void ship::Out(ofstream &ofst)
{
	ofst << "It is ship" << endl << "watercapacity = " << water << endl << "Type of ship: ";
	switch (typeship)
	{
	case Lainer:
		ofst << "Lainer" << endl;
		break;
	case Tanker:
		ofst << "Tanker" << endl;
		break;
	case Tug:
		ofst << "Tug" << endl;
		break;
	default:
		break;
	}
	OutCommon(ofst);
}