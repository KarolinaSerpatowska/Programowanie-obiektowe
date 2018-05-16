#include "Person.h"

Person::Person(string a, int b, vector<Person>* c)
{
	nazwa = a;
	wiek = b;
	dzi = c;
}
bool Person::swiek(Person &p1,Person &p2)
{
	if (p1.getwiek() == p2.getwiek())
	{
		return (p1.getnazwa() < p2.getnazwa());
	}
	else
	{
		return (p1.getwiek() < p2.getwiek());
	}
}

void Person::operator<(int w)
{
	sort(dzi->begin(), dzi->end(), swiek);
}

string Person::getnazwa()
{
	return nazwa;
}

int Person::getwiek()
{
	return wiek;
}

Person Person::getd(int i)
{
	return dzi->at(i);
}

void Person::operator<<=(Person *p)
{
	bool jest = false;
	for (auto i = 0; i < dzi->size(); i++)
	{
		if (getd(i).getnazwa() == p->getnazwa() && getd(i).getwiek() == p->getwiek())
		{
			jest = true;
		}
		if (jest == false)
		{
			dzi->push_back(*p);
		}
	}
}

Person Person::operator[](int i)
{
	return dzi->at(i);
}