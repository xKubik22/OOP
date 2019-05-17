#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class Train : public Transport 
{
	int quant; // параметр
public:
	void Indata(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	string Get_all(); // тест
	void MultiMethod(Transport *other, ofstream &ofst);//мультиметоды
	void MMplane(ofstream &ofst);//мультиметоды
	void MMtrain(ofstream &ofst);//мультиметоды
	void MMship(ofstream &ofst);//мультиметоды
	Train() {} // создание без инициализации.
};