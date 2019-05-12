#pragma once
#include <iostream>
#include <fstream>
#include "Transport.h"

using namespace std;

class container
{
private:
	class List 
	{
	public:
		List();
		List* next; // указатель на следующий элемент
		transport* data; // данные
	};
	List* head; // начало списка
	int count; // количество элементов в списке
public:
	void In(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	void Onlyplane(ofstream &ofst); // вывод только самолетов
	int Get_count(); // тест функция
	void Sort(); // сортировка
	void Clear(); // очистка контейнера от фигур
	container(); // инициализация контейнера
	~container() { Clear(); }
};