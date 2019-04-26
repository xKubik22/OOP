#include <iostream>
#include <fstream>
#include "Train.h"
#include "Plane.h"
#include "Transport.h"


using namespace std;

void transport::OutCommon(ofstream &ofst)
{
	ofst << "speed = " << speed << endl << "distance point to point = " << distAB << endl;
}
