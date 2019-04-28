#pragma once
#include <iostream>
#include <fstream>
#include "Transport.h"
using namespace std;
enum type { Lainer, Tanker, Tug };
class ship : public transport
{
	int water; 
	type typeship;
public:
	// переопределяем интерфейс класса
	void Indata(ifstream &ifst);
	void Out(ofstream &ofst);
	ship() {}
};
