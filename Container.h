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
		List* next; // указатель на следующий элемент
		Transport* data; // данные
	};
	List* head; // начало списка
	int count; // количество элементов в списке
public:
	void In(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	void Onlyplane(ofstream &ofst); // вывод только самолетов
	void MultiMethod(ofstream & ofst);
	int Get_count(); // тест функция
	void Sort(); // сортировка
	void Clear(); // очистка контейнера от фигур
	Container(); // инициализация контейнера
	~Container() { Clear(); }
};