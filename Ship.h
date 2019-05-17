#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class Ship : public Transport
{
	int water; // параметр
	enum type {Lainer, Tanker, Tug }; // определение типа судна
	type typeship; // параметр
public:
	void Indata(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	string Get_all(); // тестовая функция
	void MultiMethod(Transport *other, ofstream &ofst);//мультиметоды
	void MMplane(ofstream &ofst);//мультиметоды
	void MMtrain(ofstream &ofst);//мультиметоды
	void MMship(ofstream &ofst);//мультиметоды
	Ship() {} // переопределяем интерфейс класса
};

