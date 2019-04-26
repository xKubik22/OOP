#pragma once
#include <iostream>
#include <fstream>
#include "Transport.h"
using namespace std;
class train : public transport {
	int quant;

public:
	void Indata(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	train() {} // создание без инициализации.
};