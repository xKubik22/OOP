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
	virtual void Indata(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0; // �����
	virtual void Outplane(ofstream &ofst);
	void OutCommon(ofstream &ofst);
};