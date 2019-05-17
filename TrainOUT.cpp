#include <fstream>
#include <iostream>
#include "Train.h"
using namespace std;

void Train::Out(ofstream &ofst)
{
	ofst << "It is Train" << endl << "quantity = " << quant << endl;
	OutCommon(ofst);
}