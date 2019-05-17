#include <fstream>
#include <iostream>
#include <string>

#include "Train.h"

using namespace std;

void Train::Indata(ifstream &ifst)
{
	quant = stoi(FileRead(ifst));
}

void Train::MMplane(ofstream & ofst)
{
	ofst << "Plane and Train" << endl;
}
void Train::MMtrain(ofstream & ofst)
{
	ofst << "Train and Train" << endl;
}
void Train::MMship(ofstream & ofst)
{
	ofst << "Ship and Train" << endl;
}