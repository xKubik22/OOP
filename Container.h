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
	void In(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	void Sort();
	void Clear(); // очистка контейнера от фигур
	container(); // инициализация контейнера
	~container() { Clear(); }
};