#pragma once
#include <iostream>
#include <fstream>
#include "Transport.h"
using namespace std;
//namespace simple_shapes{
class container
{
private:
	class List {
	public:
		List();
		List * next;
		transport * data;
	};
	List* head;
	int count;
public:
	void In(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void Onlyplane(ofstream &ofst);
	int Get_count();
	void Sort();
	void Clear(); // ������� ���������� �� �����
	container(); // ������������� ����������
	~container() { Clear(); }
};