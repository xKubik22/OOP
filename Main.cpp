#include <iostream>

#include "Container.h"

using namespace std;

int main(int argc, char* argv[])
{
	int a;
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		system("pause");
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (!ifst || !ofst)
	{
		cout << "No files were found!" << endl;
		system("pause");
		return 0;
	}
	cout << "Start" << endl;
	setlocale(LC_ALL, "Russian");
	container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;
	c.Out(ofst);
	c.Sort();
	c.Out(ofst);
	c.Onlyplane(ofst);
	c.Clear();
	ofst << "Empty container. " << endl;
	cout << "Stop" << endl;
	system("pause");
	return 0;
}

