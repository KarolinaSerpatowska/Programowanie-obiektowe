#include <iostream>

using namespace std;

template <class Typ>
Typ &funkcja(Typ *t1, Typ *t2)
{
	Typ najmniejszy=*t1;
	for (auto *i = t1; i !=t2 ; i++)
	{
		if (najmniejszy > *i)
		{
			najmniejszy = *i;
		}
	}
	return najmniejszy;
}

int main()
{
	int tab[3];
	tab[0] = 1;
	tab[1] = 0;
	tab[2] = 4;
	cout << funkcja<int>(&tab[0], &tab[2]) << endl;

	system("PAUSE");
    return 0;
}
