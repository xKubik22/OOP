#include <iostream>
#include <fstream>
#include "Container.h"


using namespace std;


container::List::List()
{
	this->next = nullptr;
	this->data = nullptr;
}
container::container()
{
	head = nullptr;
	count = 0;
}

void container::Clear()
{

	while (count != 0)
	{
		List* k = head;
		head = head->next;
		delete k;
		count--;
	}
	delete head;

}
