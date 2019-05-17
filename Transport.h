#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Transport 
{
private:
	// параметры
	int speed; 
	int distAB;
	float mass;
public:
	static Transport* In(ifstream &ifst); // ввод
	static string FileRead(ifstream &ifst); // для коректного чтения
	double Time(); // вычисление времени
	bool Compare(Transport &other); // сравнение дял сортировки
	virtual void Indata(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	virtual void Outplane(ofstream &ofst); // вывод только самолетов
	void OutCommon(ofstream &ofst); // вывод
	// тест функции
	int Get_speed(); 
	int Get_distAB();
	float Get_mass();
	virtual string Get_all() = 0;
	virtual void MultiMethod(Transport *other, ofstream &ofst) = 0;//мультиметоды
	virtual void MMplane(ofstream &ofst) = 0;//мультиметоды
	virtual void MMtrain(ofstream &ofst) = 0;//мультиметоды
	virtual void MMship(ofstream &ofst) = 0;//мультиметоды
};
