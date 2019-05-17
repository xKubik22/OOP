#include <iostream>
#include <fstream>

#include "Container.h"

using namespace std;

void Container::In(ifstream &ifst)
{
	List* current = head;
	List* head2 = new List;
	while (!ifst.eof()) 
	{

		if (count == 0)
		{
			head2->data = Transport::In(ifst);
			head2->next = NULL;
			count++;
			current = head2;
			head = head2;
		}
		else
		{
			current->next = new List;
			current = current->next;
			current->data = Transport::In(ifst);
			current->next = NULL;
			count++;
		}
	}
}
