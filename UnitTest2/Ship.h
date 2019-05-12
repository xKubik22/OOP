#pragma once
#include <iostream>
#include <fstream>
#include "Transport.h"
using namespace std;

class ship : public transport
{
	int water; 
	enum type { Lainer, Tanker, Tug };
	type typeship;
public:
	// переопределяем интерфейс класса
	void Indata(ifstream &ifst);
	void Out(ofstream &ofst);
	string Get_all();
	ship() {}
};

