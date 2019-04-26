#include <iostream>
#include <fstream>
#include "Container.h"
using namespace std;

void container::Out(ofstream &ofst)
{
	ofst << "Container contains " << count + 1 << " elements." << endl;
	List *k = head;
	//transport t;
	for (int i = 0; i < count + 1; i++)
	{
		ofst << i << ": ";
		k->data->Out(ofst);
		//cout << k->data << "EQW";
		k = k->next;

	}
}


