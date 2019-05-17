#include <iostream>
#include <fstream>

#include "Container.h"

using namespace std;

void Container::MultiMethod(ofstream & ofst)
{
	ofst << "Multimethod." << endl;
	List* current_i = head;
	for (int i = 0; i < count - 1; i++) 
	{
		List* current_j = current_i->next;
		for (int j = i + 1; j < count; j++) {
			current_i->data->MultiMethod(current_j->data, ofst);
			current_i->data->Out(ofst);
			current_j->data->Out(ofst);
			current_j = current_j->next;
		}
		current_i = current_i->next;
	}
}



