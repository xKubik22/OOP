#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class transport 
{
private:
	// ���������
	int speed; 
	int distAB;
	float mass;
public:
	static transport* In(ifstream &ifst); // ����
	static string FileRead(ifstream &ifst); // ��� ���������� ������
	double Time(); // ���������� �������
	bool Compare(transport &other); // ��������� ��� ����������
	virtual void Indata(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0; // �����
	virtual void Outplane(ofstream &ofst); // ����� ������ ���������
	void OutCommon(ofstream &ofst); // �����
	// ���� �������
	int Get_speed(); 
	int Get_distAB();
	float Get_mass();
	virtual string Get_all() = 0;
};
