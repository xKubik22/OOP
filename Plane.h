#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class Plane : public Transport
{
	// параметры
	int dist; 
	int cap; 
public:
	void Indata(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	void Outplane(ofstream &ofst); // вывод только одного типа
	string Get_all(); // тест
	void MultiMethod(Transport* other, ofstream &ofst);//мультиметоды
	void MMplane(ofstream &ofst);//мультиметоды
	void MMtrain(ofstream &ofst);//мультиметоды
	void MMship(ofstream &ofst);//мультиметоды
	Plane() {} // создание без инициализации.
};