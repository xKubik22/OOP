#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class Plane : public Transport
{
	// ���������
	int dist; 
	int cap; 
public:
	void Indata(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Outplane(ofstream &ofst); // ����� ������ ������ ����
	string Get_all(); // ����
	void MultiMethod(Transport* other, ofstream &ofst);//������������
	void MMplane(ofstream &ofst);//������������
	void MMtrain(ofstream &ofst);//������������
	void MMship(ofstream &ofst);//������������
	Plane() {} // �������� ��� �������������.
};