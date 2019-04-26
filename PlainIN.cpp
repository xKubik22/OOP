#include <fstream>
#include <iostream>
#include "Plane.h"
using namespace std;

void plane::Indata(ifstream &ifst)
{
	ifst >> dist >> cap;
}