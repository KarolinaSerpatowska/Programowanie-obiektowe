#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
	Array<int> a(100);
	a[6] = 10;

	for (auto x : a)
	{
		cout << x << endl;
	}

	system("PAUSE");
	return 0;
}
