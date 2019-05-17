#include <iostream>
#include <fstream>

#include "Train.h"
#include "Plane.h"
#include "Ship.h"
#include "Transport.h"


using namespace std;

void Transport::OutCommon(ofstream &ofst)
{
	ofst << "speed = " << speed << endl << "distance point to point = " << distAB << endl << "Time = " << Time() << endl << "Now mass = " << mass << endl;
}
double Transport::Time()
{
	double time;
	time = static_cast<double>(this->distAB) / static_cast<double>(this->speed);
	return time;
}
