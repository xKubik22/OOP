#include <fstream>
#include <iostream>
#include <string>

#include "Plane.h"

using namespace std;

void Plane::Indata(ifstream &ifst)
{
	dist = stoi(FileRead(ifst));
	cap = stoi(FileRead(ifst));
}

void Plane::MMplane(ofstream & ofst)
{
	ofst << "Plane and Plane" << endl;
}

void Plane::MMtrain(ofstream & ofst)
{
	ofst << "Train and Plane" << endl;
}

void Plane::MMship(ofstream & ofst)
{
	ofst << "Ship and Plane" << endl;
}