#include <iostream>
#include <fstream>
#include "Container.h"
using namespace std;

void container::Out(ofstream &ofst)
{
	ofst << "Container contains " << count + 1 << " elements." << endl;
	List *k = head;
	ofst << "Only plane." << endl;
	//transport t;
	for (int i = 0; i < count; i++)
	{
		ofst << i << ": ";
		k->data->Outplane(ofst);
		//cout << k->data << "EQW";
		k = k->next;

	}
}


