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
	double Time();
	bool Compare(transport &other);
	virtual void Indata(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	void OutCommon(ofstream &ofst);
};