#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream plik;
	plik.open("test.txt");
	plik << "test zapisu" << endl;
	plik.close();

	ifstream plik2;
	string napis;
	cin >> napis;
	string a;
	plik2.open("test.txt");
	while (getline(plik2, a))
	{
		cout << a << endl;
	}

	plik2.close();

    return 0;
}
