#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person p1 = Person("Zbych", 70, nullptr);
	Person p2 = Person("Kunegunda", 12, nullptr);
	Person p3 = Person("Genowefa", 56, nullptr);
	vector<Person> p;
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	Person p4 = Person("Zbychu junior", 30, &p);
	p4<4;
	cout << p4.getd(0).getnazwa() << endl;
	cout << p4.getd(1).getnazwa() << endl;
	cout << p4.getd(2).getnazwa() << endl;
	Person p5 = Person("Andrzej", 6, nullptr);
	p4 <<= &p1;
	p4 <<= &p5;
	p4<4;
	cout << p4.getd(0).getnazwa() << endl;
	cout << p4.getd(1).getnazwa() << endl;
	cout << p4.getd(2).getnazwa() << endl;
	cout << p4.getd(3).getnazwa() << endl;
	cout << p4[1].getnazwa() << endl;

		system("PAUSE");
		return 0;
}