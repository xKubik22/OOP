#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Transport 
{
private:
	// ���������
	int speed; 
	int distAB;
	float mass;
public:
	static Transport* In(ifstream &ifst); // ����
	static string FileRead(ifstream &ifst); // ��� ���������� ������
	double Time(); // ���������� �������
	bool Compare(Transport &other); // ��������� ��� ����������
	virtual void Indata(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0; // �����
	virtual void Outplane(ofstream &ofst); // ����� ������ ���������
	void OutCommon(ofstream &ofst); // �����
	// ���� �������
	int Get_speed(); 
	int Get_distAB();
	float Get_mass();
	virtual string Get_all() = 0;
	virtual void MultiMethod(Transport *other, ofstream &ofst) = 0;//������������
	virtual void MMplane(ofstream &ofst) = 0;//������������
	virtual void MMtrain(ofstream &ofst) = 0;//������������
	virtual void MMship(ofstream &ofst) = 0;//������������
};
