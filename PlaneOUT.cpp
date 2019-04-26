#include <fstream>
#include <iostream>
#include "Plane.h"
using namespace std;
void plane::Out(ofstream &ofst)
{
	ofst << "It is plane " << endl << "distance = " << dist << endl << "capacity = " << cap << endl;
	OutCommon(ofst);
}