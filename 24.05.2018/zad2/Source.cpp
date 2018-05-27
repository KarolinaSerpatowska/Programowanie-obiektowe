#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	List<int> lista;
	lista.push_back(12);
	lista.push_back(15);
	lista.push_front(10);
	lista.Show();
	endl(cout);


	lista.push_back(321456);
	lista.push_back(78456);
	lista.push_back(789321);

	lista.pop_front();

	system("PAUSE");
	return 0;
}
