#pragma once
#include <iostream>
#include <fstream>

using namespace std;


class transport {
private:
	int speed;
	int distAB;
public:
	static transport* In(ifstream &ifst);
	virtual void Indata(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	virtual void Outplane(ofstream &ofst);
	void OutCommon(ofstream &ofst);
};