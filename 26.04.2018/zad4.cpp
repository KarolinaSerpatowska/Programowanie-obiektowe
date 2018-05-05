#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int p1, int p2)
{
	return (p1 < p2 && p1!=p2);
}


vector<int> funkcja(vector<int> w1, vector<int> w2)
{
	vector<int> wynik;
	for (int i = 0; i < w1.size(); i++)
	{
		wynik.push_back(w1[i]);	
	}	
	for (int i = 0; i < w2.size(); i++)
	{
		wynik.push_back(w2[i]);
	}
	sort(wynik.begin(), wynik.end(), cmp);
	wynik.erase(unique(wynik.begin(), wynik.end()), wynik.end());
	for (int i = 0; i < wynik.size(); i++) //wypisanie
	{
		cout << wynik[i] << endl;
	}
	return wynik;
}


int main()
{
	vector<int> w1;
	vector<int> w2;

	w1.push_back(2);
	w1.push_back(10);
	w1.push_back(3);

	w2.push_back(2);
	w2.push_back(1);
	w2.push_back(11);

	funkcja(w1, w2);

	system("PAUSE");
	return 0;
}
