#include <iostream>
#include <fstream>
#include "Container.h"
using namespace std;

void container::Out(ofstream &ofst)
{
	ofst << "Container contains " << count + 1 << " elements." << endl;
	List *k = head;
	//transport t;
	for (int i = 0; i < count; i++)
	{
		ofst << i+1 << ": ";
		k->data->Out(ofst);
		k = k->next;
		
	}
	
}
void container::Onlyplane(ofstream &ofst)
{
	List *m = head;
	ofst << "Only plane." << endl;
	for (int i = 0; i < count; i++)
	{
		ofst << i + 1 << ": ";
		m->data->Outplane(ofst);
		m = m->next;

	}
}


