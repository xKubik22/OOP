#include <fstream>
#include <iostream>
#include <string>

#include "Train.h"

using namespace std;

void train::Indata(ifstream &ifst)
{
	quant = stoi(FileRead(ifst));
}