#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <class Typ>
Typ &funkcja(Typ *t1, Typ *t2)
{
	Typ najmniejszy = *t1;
	for (auto *i = t1; i != t2; i++)
	{
		if (najmniejszy > *i)
		{
			najmniejszy = *i;
		}
	}
	return najmniejszy;
}

template <> string &funkcja<string>(string *t1, string *t2)
{
	string *najmniejszy = t1;
	for (string *i = t1; i != t2; i++)
	{
		if (lexicographical_compare(i->begin(), i->end(), najmniejszy->begin(), najmniejszy->end(), [](char a, char b)->bool
		{
			return tolower(a) < tolower(b);
		}))
		{
			najmniejszy = i;
		}
	}
	return *najmniejszy;
}


int main()
{
	int tab[3];
	tab[0] = 1;
	tab[1] = 0;
	tab[2] = 4;
	cout << funkcja<int>(&tab[0], &tab[2]) << endl;

	string * s = new string[4]{ "BbbbBBba","AAabc","okooooa","AAaAAaa" };
	cout << funkcja<string>(s, s + 3) << endl;

	delete[] s;

	system("PAUSE");
	return 0;
}
