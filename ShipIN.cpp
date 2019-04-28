#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;
void ship::Indata(ifstream &ifst)
{
	int type;
	ifst >> water>>type;
	switch (type)
	{
	case 1:
		typeship = Lainer;
		break;
	case 2:
		typeship = Tanker;
		break;
	case 3:
		typeship = Tug;
		break;
	default:
		break;
	}
}