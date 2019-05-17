#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class Ship : public Transport
{
	int water; // ��������
	enum type {Lainer, Tanker, Tug }; // ����������� ���� �����
	type typeship; // ��������
public:
	void Indata(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	string Get_all(); // �������� �������
	void MultiMethod(Transport *other, ofstream &ofst);//������������
	void MMplane(ofstream &ofst);//������������
	void MMtrain(ofstream &ofst);//������������
	void MMship(ofstream &ofst);//������������
	Ship() {} // �������������� ��������� ������
};

