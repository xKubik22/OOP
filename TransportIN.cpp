#include <iostream>
#include <fstream>
#include "Plane.h"
#include "Train.h"
#include "Ship.h"
#include "Transport.h"

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
	ifst >> typetransport->distAB >> typetransport->speed >> typetransport->mass;
	return typetransport;
}
void transport::Outplane(ofstream &ofst) {
	ofst << endl; // пустая строка
}