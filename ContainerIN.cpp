#include <iostream>
#include <fstream>
#include "Container.h"


using namespace std;

//namespace simple_shapes { 

void container::In(ifstream &ifst)
{
	List* current = head;
	List* head2 = new List;
	while (!ifst.eof()) {
		//новый элемент списка


		if (count == 0)
		{
			head2->data = transport::In(ifst);
			head2->next = NULL;
			count++;
			current = head2;
			head = head2;
		}
		else
		{
			current->next = new List;
			current = current->next;
			current->data = transport::In(ifst);
			current->next = NULL;
		}
	}
}