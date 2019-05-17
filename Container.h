#pragma once
#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

class Container
{
private:
	class List 
	{
	public:
		List();
		List* next; // ��������� �� ��������� �������
		Transport* data; // ������
	};
	List* head; // ������ ������
	int count; // ���������� ��������� � ������
public:
	void In(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Onlyplane(ofstream &ofst); // ����� ������ ���������
	void MultiMethod(ofstream & ofst);
	int Get_count(); // ���� �������
	void Sort(); // ����������
	void Clear(); // ������� ���������� �� �����
	Container(); // ������������� ����������
	~Container() { Clear(); }
};