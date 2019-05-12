#include <iostream>
#include <fstream>
#include "Plane.h"
#include "Train.h"
#include "Ship.h"
#include "Transport.h"
#include <string>

using namespace std;

transport* transport::In(ifstream &ifst)
{
	transport* typetransport;
	int k;
	ifst >> k;
	switch (k) {
	case 1:
		typetransport = new plane;
		break;
	case 2:
		typetransport = new train;
		break;
	case 3:
		typetransport = new ship;
		break;
	default:
		return 0;
	}
	typetransport->Indata(ifst);
	ifst >> typetransport->speed >> typetransport->distAB >> typetransport->mass;
	return typetransport;
}
void transport::Outplane(ofstream &ofst) {
	ofst << endl; // пустая строка
}
int transport::Get_distAB()
{
	return this->distAB;
}
int transport::Get_speed()
{
	return this->speed;
}
float transport::Get_mass()
{
	return this->mass;
}
string plane::Get_all()
{
	return to_string(this->cap) + to_string(this->dist);
}
string train::Get_all()
{
	return to_string(this->quant);
}
string ship::Get_all()
{
	return to_string(this->typeship) + to_string(this->water);
}