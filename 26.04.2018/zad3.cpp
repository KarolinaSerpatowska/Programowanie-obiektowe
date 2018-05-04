#include <iostream>
#include <string>
#include <list>

using namespace std;

void funkcja(list<string>::iterator i1, list<string>::iterator i2)
{
	for (auto i=i1; i!=i2; i++)
	{
		cout << *i << endl;
	}
}


int main()
{
	string napis;
	list<string> napisy;
	int ilosc;
	int i = 0;
	cin >> ilosc;
	while (i < ilosc)
	{
		cin >> napis;
		napisy.push_back(napis);
		i++;
	}
	cin >> napis;
	auto n=find(napisy.begin(),napisy.end(),napis);
	list<string>::iterator it2 = napisy.end();
	funkcja(n, it2);
	
	system("PAUSE");
	return 0;
}
