#include <iostream>
#include <fstream>
#include <string>

#include "Plane.h"
#include "Train.h"
#include "Ship.h"
#include "Transport.h"


using namespace std;

transport* transport::In(ifstream &ifst)
{
	transport* typetransport;
	int k;
	k = stoi(FileRead(ifst));
	switch (k)
	{
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
		cout << "Uncorrected transport type" << endl;
		system("pause");
		exit(0);
	}
	typetransport->Indata(ifst);
	typetransport->speed = stoi(FileRead(ifst));
	typetransport->distAB = stoi(FileRead(ifst));
	typetransport->mass = stof(FileRead(ifst));
	return typetransport;
}
void transport::Outplane(ofstream &ofst) 
{
	ofst << endl; // пустая строка
}
//Тестовые функции
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