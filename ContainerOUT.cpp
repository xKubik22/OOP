#include <iostream>
#include <fstream>

#include "Container.h"

using namespace std;

void Container::Out(ofstream &ofst)
{
	ofst << "Container contains " << count + 1 << " elements." << endl;
	List *k = head;
	//Transport t;
	for (int i = 0; i < count; i++)
	{
		ofst << i+1 << ": ";
		k->data->Out(ofst);
		k = k->next;
		
	}
	
}
void Container::Onlyplane(ofstream &ofst)
{
	List* m = head;
	ofst << "Only Plane." << endl;
	for (int i = 0; i < count; i++)
	{
		ofst << i + 1 << ": ";
		m->data->Outplane(ofst);
		m = m->next;
	}
}


