#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class train : public transport 
{
	int quant; // ��������
public:
	void Indata(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	string Get_all(); // ����
	train() {} // �������� ��� �������������.
};