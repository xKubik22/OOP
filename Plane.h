#pragma once
#include <iostream>
#include <fstream>
#include "Transport.h"
using namespace std;
class plane : public transport {
	int dist;
	int cap;

public:
	void Indata(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	plane() {} // �������� ��� �������������.
};