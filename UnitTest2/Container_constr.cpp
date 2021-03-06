#include <iostream>
#include <fstream>
#include "Container.h"


using namespace std;


Container::List::List()
{
	this->next = nullptr;
	this->data = nullptr;
}
Container::Container()
{
	head = nullptr;
	count = 0;
}
bool Transport::Compare(Transport &other) {
	if (this!=NULL&&other.distAB!=NULL)
	{
		return Time() > other.Time();
	}
}
void Container::Sort() {
	List* a, *b, *p, *h = NULL;

	for (List* i = head; i != NULL; ) {
		a = i;
		i = i->next;
		b = h;
		for (p = NULL; (b != NULL) &&a->data->Compare(*b->data); ) {
			p = b;
			b = b->next;
		}

		if (p == NULL) {
			a->next = h;
			h = a;
		}
		else {
			a->next = b;
			p->next = a;
		}
	}
	if (h != NULL)
		head = h;
}

void Container::Clear()
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
int Container::Get_count()
{
	return this->count;
}