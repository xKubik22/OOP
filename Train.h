#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class train : public transport 
{
	int quant; // параметр
public:
	void Indata(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	string Get_all(); // тест
	train() {} // создание без инициализации.
};