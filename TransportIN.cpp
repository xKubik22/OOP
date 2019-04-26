#include <iostream>
#include <fstream>
#include "Plane.h"
#include "Train.h"
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
	default:
		return 0;
	}
	typetransport->Indata(ifst);
	ifst >> typetransport->distAB >> typetransport->speed;
	return typetransport;
}