#include <iostream>

using namespace std;

class ssak
{
public:
	ssak(){}
	void jedz()
	{
		cout << "jedzenie" << endl;
	}
};

class pies:public ssak
{
public:
	pies(){}
	void szczekaj()
	{
		cout << "szczekanie" << endl;
	}
};


int main()
{
	ssak s = ssak();
	s.jedz();
	pies p = pies();
	p.szczekaj();
	p.jedz();

	cin.get();
    return 0;
}
