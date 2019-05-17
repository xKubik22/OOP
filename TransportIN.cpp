#include <iostream>
#include <fstream>
#include <string>

#include "Plane.h"
#include "Train.h"
#include "Ship.h"
#include "Transport.h"


using namespace std;

Transport* Transport::In(ifstream &ifst)
{
	Transport* typetransport;
	int k;
	k = stoi(FileRead(ifst));
	switch (k)
	{
	case 1:
		typetransport = new Plane;
		break;
	case 2:
		typetransport = new Train;
		break;
	case 3:
		typetransport = new Ship;
		break;
	default:
		cout << "Uncorrected Transport type" << endl;
		system("pause");
		exit(0);
	}
	typetransport->Indata(ifst);
	typetransport->speed = stoi(FileRead(ifst));
	typetransport->distAB = stoi(FileRead(ifst));
	typetransport->mass = stof(FileRead(ifst));
	return typetransport;
}
void Transport::Outplane(ofstream &ofst) 
{
	ofst << endl; // пустая строка
}

void Plane::MultiMethod(Transport* other, ofstream & ofst)
{
	other->MMplane(ofst);
}

void Train::MultiMethod(Transport* other, ofstream & ofst)
{
	other->MMtrain(ofst);
}

void Ship::MultiMethod(Transport* other, ofstream & ofst)
{
	other->MMship(ofst);
}

//Тестовые функции
int Transport::Get_distAB()
{
	return this->distAB;
}

int Transport::Get_speed()
{
	return this->speed;
}

float Transport::Get_mass()
{
	return this->mass;
}

string Plane::Get_all()
{
	return to_string(this->cap) + to_string(this->dist);
}

string Train::Get_all()
{
	return to_string(this->quant);
}

string Ship::Get_all()
{
	return to_string(this->typeship) + to_string(this->water);
}