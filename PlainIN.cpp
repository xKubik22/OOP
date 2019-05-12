#include <fstream>
#include <iostream>
#include <string>

#include "Plane.h"

using namespace std;

void plane::Indata(ifstream &ifst)
{
	dist = stoi(FileRead(ifst));
	cap = stoi(FileRead(ifst));
}