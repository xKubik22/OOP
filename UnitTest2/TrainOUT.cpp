#include <fstream>
#include <iostream>
#include "Train.h"
using namespace std;

void train::Out(ofstream &ofst)
{
	ofst << "It is train" << endl << "quantity = " << quant << endl;
	OutCommon(ofst);
}