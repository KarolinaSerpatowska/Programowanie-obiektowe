#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
	string nazwa;
	int wiek;
	vector<Person>* dzi;

public:
	Person(){}
	Person(string, int, vector<Person>*);
	void operator<(int);
	static bool swiek(Person&,Person&);
	string getnazwa();
	int getwiek();
	void operator<<=(Person*);
	Person getd(int);
	Person operator[](int);
};

