#include <fstream>
#include <iostream>
#include <string>

#include "Ship.h"

using namespace std;

void ship::Indata(ifstream &ifst)
{
	int types;
	water = stoi(FileRead(ifst));
	types = stoi(FileRead(ifst));
	if (types == 1)
	{
		typeship = Lainer;
	}
	else 
	{
		if (types == 2)
		{
			typeship = Tanker;
		}
		else
		{
			if (types == 3) 
			{
				typeship = Tug;
			}
			else
			{
				cout << "ERROR IN FAILIN.TXT";
				exit(0);
			}
		}
	}
		
}