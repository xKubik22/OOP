#include <fstream>
#include <iostream>

#include "Plane.h"

using namespace std;

void Plane::Out(ofstream &ofst)
{
	ofst << "It is Plane " << endl << "distance = " << dist << endl << "capacity = " << cap << endl;
	OutCommon(ofst);
}
void Plane::Outplane(ofstream &ofst) 
{
	Out(ofst);
}
